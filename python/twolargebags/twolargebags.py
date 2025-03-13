#!/bin/pypy3
for c in range(int(input())):
    yes = True
    input()
    arr = list(map(int, input().split()))
    arr.sort()
    numNums = [0 for _ in range(arr[-1]+1)]
    for i in arr:
        numNums[i] += 1
    for i in range(len(numNums)):
        if numNums[i] == 1:
            yes = False
            break
        elif numNums[i] & 1:
            numNums[i + 1] += 1
    print("yes" if yes else "no") 
