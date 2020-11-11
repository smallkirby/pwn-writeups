import sys
import json

with open(sys.argv[1]) as f:
    trace = json.load(f)

stack = []
num_flag = False

for t in trace:
    if t["event"] != "branch":
        continue
    
    inst_addr = t["inst_addr"]
    branch_taken = t["branch_taken"]

    if inst_addr == "0x55f6b4d44d06": #*
        if not branch_taken:
            stack.append("*")

    if inst_addr == "0x55f6b4d44be9": #,
        if not branch_taken:
            stack.append(",")

    if inst_addr == "0x55f6b4d44caf": #-
        if not branch_taken:
            stack.append("-")

    if inst_addr == "0x55f6b4d44c58": #+
        if not branch_taken:
            stack.append("+")

    if inst_addr == "0x55f6b4d44d5d": #m
        if not branch_taken:
            stack.append("m")

    if inst_addr == "0x55f6b4d44db4": #M
        if not branch_taken:
            stack.append("M")
    
    if inst_addr == "0x55f6b4d44c1c": # x<1
        if not branch_taken:
            num_flag = True

    if inst_addr == "0x55f6b4d44c22": # x>9
        if num_flag == False:
          print("ERROR!")
        if not branch_taken:
            stack.append("1")
            num_flag = False
        else:
            num_flag = False


print("result:")
print("".join(stack))
