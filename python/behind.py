#!/bin/python3
for case in range(int(input())):
	numEvents, window = map(int, input().split())
	events = list(map(int, input().split()))
	#for i in range(events):
	#	if events[i] > 0:
	#		events[i] = 0
	prefixSum = [0]
	for i in range(len(events)):
		prefixSum.append(prefixSum[len(prefixSum)-1] + events[i])
	earlies = 0
	for i in range(window, len(prefixSum)):
		if (prefixSum[i]-prefixSum[i-window]) < 1: # if error try (window - 1)
			earlies += 1
	print(earlies)
# cannot convert and odd ammount to an even
# WBWWWWWWWW3
# WWWWWWWWW