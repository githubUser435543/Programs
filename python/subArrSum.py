#!/bin/python3
import sys
input = sys.stdin.readline
print = sys.stdout.write

input()
psum = [0]
for i in map(int, input().split()): psum.append(psum[-1] + i)
hi = -1000000001

sortedPSum = []

for i in range(len(psum)): sortedPSum.append((psum[i], i))

