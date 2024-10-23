#!/bin/python3
# HELP ME
cases = int(input())

def fits(top, bottom):
    return ((top[0] <= bottom[0]) and (top[1] <= bottom[1])) or ((top[0] <= bottom[1]) and (top[1] <= bottom[0]))

fitsSolutions = {}

for case in range(cases):
    numParts = int(input())
    parts = []
    for part in numParts:
        part = list(map(int, input()))
        parts.append(part)
    combination = 0b0 # 0b is the prefix 
    depth = 0
    for i in range(2**numParts):
        combination += 1
        

