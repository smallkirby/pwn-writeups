import os
import time
import random
import string
import struct
import binascii
import socketserver

FLAG = 'ctfzone{place_for_flag}\n'
FLAG_COUNT = 100
HOST = '0.0.0.0'
PORT = 9998

SESSION_LIFETIME = 300

REG_USER    = '1'
SEND_STATE  = '2'
GET_FLAG    = '3'

ERROR_NO    = 1
ERROR_LOSE  = 2
ERROR_WIN   = 3
ERROR_FLAG  = 4
ERROR_MOVE  = 5
ERROR_SESS  = 6

Xs = 1
Os = 2


class TicTacToeServerHandler(socketserver.BaseRequestHandler):
    sessions = {}

    def handle(self):
        try:
            data = str(self.request.recv(1), 'ascii')
            if data[0] == REG_USER:
                self.process_reg_user()
            elif data[0] == SEND_STATE:
                self.process_state()
            elif data[0] == GET_FLAG:
                self.process_flag()
        except Exception as e:
            print('[-] Error handling messages: {}'.format(e))

    def process_reg_user(self):
        user = self.generate_session()
        values = (ERROR_NO, user['sessid'])
        packer = struct.Struct('<i 32s')
        packed_data = packer.pack(*values)
        try:
            self.request.sendall(packed_data) #send state "1"
            print('[+] Sending session info: {} {}'.format(binascii.hexlify(packed_data), values))
        except Exception as e:
            print('[-] Error sending registration response: {}'.format(e))

    def process_flag(self):
        unpacker = struct.Struct('<32s')
        input_bytes = self.request.recv(32)
        session = unpacker.unpack(input_bytes)
        session = str(session[0], 'ascii')
        if session not in self.sessions:
            err = ERROR_SESS
            msg = "You trying to cheat on me!\n"
        elif self.sessions[session]['level'] < FLAG_COUNT:
            err = ERROR_SESS
            msg = "You trying to cheat on me!\n"
        else:
            err = ERROR_NO
            msg = FLAG

        try:
            packer = struct.Struct('<i {}s'.format(len(msg)))
            values = (err, bytes(msg, 'ascii'))
            packed_data = packer.pack(*values)
            self.request.sendall(packed_data)
            print('[+] Sending flag info: {} {}'.format(binascii.hexlify(packed_data), values))
        except Exception as e:
            print('[-] Error sending flag response: {}'.format(e))

    def process_state(self):
        try:
            unpacker = struct.Struct('<32s i i')
            input_bytes = self.request.recv(40)
            session, cmove, hmove = unpacker.unpack(input_bytes)
            session = str(session, 'ascii')
            print("c:"+str(cmove)+" h:"+str(hmove))
            values = self.get_state_response(session, cmove, hmove)
        except Exception as e:
            print('[-] Error parsing process_state request: {}'.format(e))
        try:
            packer = struct.Struct('<i')
            packed_data = packer.pack(*values)
            self.request.sendall(packed_data)
            print('[+] Sending state info: {} {}'.format(binascii.hexlify(packed_data), values))
        except Exception as e:
            print('[-] Error sending state response: {}'.format(e))

    def get_state_response(self, session, cmove, hmove):
        if session not in self.sessions:
            return (ERROR_SESS,)
        if (self.sessions[session]['field'][cmove] != 0) or (hmove != -1 and self.sessions[session]['field'][hmove] != 0):
            self.sessions[session]['field'] = [0, 0, 0, 0, 0, 0, 0, 0, 0]
            return (ERROR_MOVE,)
        self.sessions[session]['field'][cmove] = Xs
        if hmove != -1:
            self.sessions[session]['field'][hmove] = Os
        win = self.check_win(self.sessions[session]['field'])

        #WIN
        if win == Xs:
            self.sessions[session]['level'] = 1
            self.sessions[session]['field'] = [0, 0, 0, 0, 0, 0, 0, 0, 0]
            return (ERROR_LOSE,)
        if win == Os:
            self.sessions[session]['level'] += 1
            print("[*]:level: "+str(self.sessions[session]['level']))
            self.sessions[session]['field'] = [0, 0, 0, 0, 0, 0, 0, 0, 0]
            if self.sessions[session]['level'] > FLAG_COUNT:
                return (ERROR_FLAG,)
            else:
                return (ERROR_WIN,)
        has_empty = False
        for x in self.sessions[session]['field']:
            if x == 0:
                has_empty = True
                break
        if not has_empty:
            self.sessions[session]['level'] = 1
            self.sessions[session]['field'] = [0, 0, 0, 0, 0, 0, 0, 0, 0]
            return (ERROR_LOSE,)
        return (ERROR_NO,)

    def check_win(self, field):
        if field[0] == field[1] == field[2] != 0:
            return field[0]
        if field[3] == field[4] == field[5] != 0:
            return field[3]
        if field[6] == field[7] == field[8] != 0:
            return field[6]
        if field[0] == field[3] == field[6] != 0:
            return field[0]
        if field[1] == field[4] == field[7] != 0:
            return field[1]
        if field[2] == field[5] == field[8] != 0:
            return field[2]
        if field[0] == field[4] == field[8] != 0:
            return field[0]
        if field[2] == field[4] == field[6] != 0:
            return field[2]
        return 0

    def generate_session(self):
        try:
            ct = time.time()
            keys = []
            for key, val in self.sessions.items():
                if ct - val['time'] > SESSION_LIFETIME:
                    keys.append(key)
            for key in keys:
                del self.sessions[key]
        except Exception as e:
            print('[-] Error while cleaning up sessions: {}'.format(e))
        sessid = random_string()
        while sessid in self.sessions:
            sessid = random_string()
        user = {'sessid': bytes(sessid, 'ascii'),
                'level': 1,
                'field': [0, 0, 0, 0, 0, 0, 0, 0, 0],
                'time': time.time()}
        self.sessions[sessid] = user
        return user


class ThreadedTCPServer(socketserver.ThreadingMixIn, socketserver.TCPServer):
    pass


def random_string(string_length=32):
    letters = string.ascii_letters + string.digits
    return ''.join(random.choice(letters) for _ in range(string_length))


def start_server(lhost, lport):
    server = ThreadedTCPServer((lhost, lport), TicTacToeServerHandler)
    try:
        print('[+] Server started at {}:{}'.format(lhost, lport))
        server.serve_forever()
    except KeyboardInterrupt:
        print('[+] KeyboardInterrupt received, exit\n')
        exit(0)
    except Exception as e:
        print('[-] General pooling error: {}'.format(e))


if __name__ == '__main__':
    try:
        FLAG = "flag{this_is_test_flag\n"
        #FLAG = os.environ['FLAG'] + '\n'
    except Exception as e:
        print('[-] Can\'t get flag: {}'.format(e))
        exit(0)
    start_server(HOST, PORT)
