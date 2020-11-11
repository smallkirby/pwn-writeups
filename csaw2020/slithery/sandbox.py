#!/usr/bin/env python3
from base64 import b64decode
import blacklist  # you don't get to see this :p

"""
Don't worry, if you break out of this one, we have another one underneath so that you won't
wreak any havoc!
"""

def main():
    print("EduPy 3.8.2")
    while True:
        try:
            command = input(">>> ")
            if any([x in command for x in blacklist.BLACKLIST]):
                raise Exception("not allowed!!")

            final_cmd = """
program = open("sandbox.py", "r")
result = int(((54 * 8) / 16) * (1/3) - 8)
some_words = program.readlines()[result].strip().split(" ")
wordA = some_words[result]
wordB = some_words[-1 * result]
program.close()
funcA = getattr(__import__(wordA), wordB)
np = __builtins__.__dict__[funcA(b'X19pbXBvcnRfXw==').decode('utf-8')](funcA(b'bnVtcHk=').decode('utf-8'))\n""" + command
            exec(final_cmd)

        except (KeyboardInterrupt, EOFError):
            return 0
        except Exception as e:
            print(f"Exception: {e}")

if __name__ == "__main__":
    exit(main())
