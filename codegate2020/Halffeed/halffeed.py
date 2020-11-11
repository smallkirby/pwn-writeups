from Crypto.Cipher import AES


def aes_encrypt(key, data):
    assert isinstance(key, bytes) and isinstance(data, bytes)
    assert len(key) == 16 and len(data) == 16

    aes = AES.new(key, AES.MODE_ECB)
    return aes.encrypt(data), aes.encrypt(key)


def pad(data):
    assert isinstance(data, bytes)
    assert len(data) <= 16

    if len(data) != 16:
        data += b'\x01' + b'\x00' * (15 - len(data))
    return data


class HalfFeed(object):
    # Abstract Version of mixFeed

    def __init__(self, key):
        assert isinstance(key, bytes)
        assert len(key) == 16
        self.key = key

    def feed_plus(self, tag, data):
        assert isinstance(tag, bytes) and isinstance(data, bytes)
        assert len(tag) == 16 and len(data) <= 16

        enc_data = bytes(b1 ^ b2 for b1, b2 in zip(tag, data))
        feed_data = pad(data)[:8] + pad(enc_data)[8:]
        tag = bytes(b1 ^ b2 for b1, b2 in zip(tag, feed_data))

        return tag, enc_data

    def feed_minus(self, tag, data):
        assert isinstance(tag, bytes) and isinstance(data, bytes)
        assert len(tag) == 16 and len(data) <= 16

        dec_data = bytes(b1 ^ b2 for b1, b2 in zip(tag, data))
        feed_data = pad(dec_data)[:8] + pad(data)[8:]
        tag = bytes(b1 ^ b2 for b1, b2 in zip(tag, feed_data))

        return tag, dec_data

    def encrypt(self, nonce, plaintext):
        assert isinstance(nonce, bytes) and isinstance(plaintext, bytes)
        assert len(nonce) == 16

        delta = len(plaintext) % 16
        delta = delta.to_bytes(16, byteorder='little')

        Kn, _ = aes_encrypt(self.key, nonce)
        T, K = aes_encrypt(Kn, nonce)

        ciphertext = b''
        for i in range(0, len(plaintext), 16):
            T, block = self.feed_plus(T, plaintext[i:i+16])
            ciphertext += block
            T, K = aes_encrypt(K, T)

        T = bytes(b1 ^ b2 for b1, b2 in zip(T, delta))
        T, _ = aes_encrypt(K, T)

        return ciphertext, T

    def decrypt(self, nonce, ciphertext, tag):
        assert isinstance(nonce, bytes) and isinstance(ciphertext, bytes)
        assert len(nonce) == 16

        delta = len(ciphertext) % 16
        delta = delta.to_bytes(16, byteorder='little')

        Kn, _ = aes_encrypt(self.key, nonce)
        T, K = aes_encrypt(Kn, nonce)

        plaintext = b''
        for i in range(0, len(ciphertext), 16):
            T, block = self.feed_minus(T, ciphertext[i:i+16])
            plaintext += block
            T, K = aes_encrypt(K, T)

        T = bytes(b1 ^ b2 for b1, b2 in zip(T, delta))
        T, _ = aes_encrypt(K, T)

        if T != tag:
            return None

        return plaintext
