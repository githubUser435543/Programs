#!/bin/python3
for case in range(int(input())):
    w, h = map(int, input().split())
    a = w * h
    print(a // 4)
