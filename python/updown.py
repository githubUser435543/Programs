#!/bin/python3
import sys
input = sys.stdin.readline
print = sys.stdout.write


cases = int(input())

def makePrefixSum(arr):
    prefixSum = [0]
    for item in arr:
        prefixSum.append(prefixSum[len(prefixSum)-1]+item)
    return prefixSum
                         

for case in range(cases): 
    movement= []
    strlen = input()
    mvstr = input().strip()
    for c in mvstr:
        if c == "U":
            movement.append(1)
        elif c == "D":
            movement.append(-1)
    evPrefixSum = makePrefixSum(movement)
    print(str(evPrefixSum))
    sumOfSubstrings = set()
    for start in range(len(evPrefixSum)):
        for end in range(start, len(evPrefixSum)):
            sumOfSubstrings.add(evPrefixSum[end]-evPrefixSum[start])
    e = str(len(sumOfSubstrings))
    print(e + "\n")

        
