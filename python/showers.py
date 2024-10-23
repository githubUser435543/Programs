#!/bin/python3
for c in range(int(input())):
	timeframes, showerTime, minInDay = map(int, input().split())
	timesList = []
	for tf in range(timeframes):
		start, end = map(int, input().split())
		timesList.append((start, end))

	timesList.insert(0, (0, 0))
	timesList.append((minInDay, minInDay))
	longestSpan = 0
	for t in range(len(timesList)):
		if t == len(timesList) - 1: continue
		currFreeTime = timesList[t + 1][0] - timesList[t][1] 
		currFreeTime += 0 # dont even ask
		if longestSpan < currFreeTime: longestSpan = currFreeTime

	if longestSpan >= showerTime: print("yEs")
	else: print("nO")
