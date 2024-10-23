#!/bin/python3

for c in range(int(input())):
	currIncrease = 1
	arrSize = 1
	start, end = map(int, input().split())
	while start <= end: # we'll always be 1 over
		start += currIncrease
		currIncrease += 1
		arrSize += 1

	print(arrSize - 1)
