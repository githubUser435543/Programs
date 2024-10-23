#!/bin/python3

cases = int(input())

for case in range(cases):
    a, b = map(int, input().split())
    c = a + b 
    if c < -2147483648 or c > 2147483647:
        print("overflow")
    else:
        print("safe addition")
