#!/usr/bin/env python3
import sys

def hexadecimalConversion(string):
    conv = ''
    for char in string:
        if 'a' <= char <= 'f':
            char = chr(ord(char)+6)
        conv += char
    return conv

def my_printf(format_string, param):
    check = True
    for idx in range(0, len(format_string)):
        if check:
            if format_string[idx] == '#' and format_string[idx+1] == 'j' and param.isnumeric():
                hexadecimalValue = f"{int(param):x}"
                print(hexadecimalConversion(hexadecimalValue), end="")
                check = False
            else:
                print(format_string[idx], end="")
        else:
            check = True
    print("")

data = sys.stdin.readlines()

for i in range(0, len(data), 2):
    my_printf(data[i].rstrip(), data[i+1].rstrip())
