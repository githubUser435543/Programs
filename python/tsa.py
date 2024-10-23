#!/bin/python3

for case in range(int(input())):
	multis = []
	numRegions = int(input());
	times = list(map(int, input().split()))
	turts = list(map(int, input().split()))
	for i in range(numRegions):
		multis.append(times[i] * turts[i])


	lowest = multis[0]
	for item in multis:
		if (lowest > item):
			lowest = item
	print(lowest)

