#!/bin/python3
cases = int(input())

for case in range(cases):
    numStr, applesOrCats = input().split()
    num = int(numStr)
    if (applesOrCats == "Apples"):
        print(float(num/5), "Cats")
    else:
        print(float(num*5), "Apples")
