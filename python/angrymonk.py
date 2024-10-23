#!/bin/python3
for case in range(int(input())):
	totalLen, numParts = map(int, input().split())
	parts = list(map(int, input().split()))
	highest = parts[0]
	highestIndex = 0
	for i in range(len(parts)):
		if parts[i] > highest:
			highest = parts[i]
			highestIndex = i
	print((totalLen-highest)*2-(len(parts)-1))