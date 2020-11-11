#!/usr/bin/env python3
from halffeed import HalfFeed


nonce = 0
nonce_list = []


def recv_data(text):
    data = input('{} = '.format(text)).strip()
    return bytes.fromhex(data)


def send_data(text, data):
    assert isinstance(data, bytes)
    print('{} = {}'.format(text, data.hex()))


def encrypt(halffeed):
    global nonce
    P = recv_data('plaintext')

    if b'cat flag' in P:
        print('[EXCEPTION] Invalid Command "cat flag"')
        exit()

    C, T = halffeed.encrypt(nonce.to_bytes(16, byteorder='big'), P)

    send_data('ciphertext', C)
    send_data('tag', T)
    nonce += 1


def decrypt(halffeed):
    N = recv_data('nonce')
    C = recv_data('ciphertext')
    T = recv_data('tag')

    if N in nonce_list:
        print('[EXCEPTION] Nonce Misuse')
        exit()

    nonce_list.append(N)

    P = halffeed.decrypt(N, C, T)

    if P is None:
        print('[EXCEPTION] Authentication Failed')
        exit()

    send_data('plaintext', P)


def execute(halffeed):
    N = recv_data('nonce')
    C = recv_data('ciphertext')
    T = recv_data('tag')

    P = halffeed.decrypt(N, C, T)

    if P is not None:
        cmds = P.split(b';')
        for cmd in cmds:
            if cmd.strip() == b'cat flag':
                with open('./flag') as f:
                    print(f.read())
            else:
                print('[EXCEPTION] Unknown Command')
    else:
        print('[EXCEPTION] Authentication Failed')
    exit()


def print_menu():
    print('1) Encrypt')
    print('2) Decrypt')
    print('3) Execute')
    print('4) Exit')


def main():
    with open('./secretkey', 'rb') as f:
        hf = HalfFeed(f.read())

    for i in range(10):
        print_menu()
        option = input('> ')
        if option == '1':
            encrypt(hf)
        elif option == '2':
            decrypt(hf)
        elif option == '3':
            execute(hf)
        else:
            return


if __name__ == '__main__':
    main()
