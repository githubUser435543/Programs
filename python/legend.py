#!/usr/local/bin/pypy

cases = int(input())

for case in range(cases):
    if input().strip() == "0:00":
        print("legend")
    else:
        print("!legend")
