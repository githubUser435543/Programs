#!/bin/python3
for case in range(int(input())):
	possible = True	
	length, jumpDist, swimMeters = map(int, input().split())
	river = input.strip()
	buff = str("0")*jumpDist
	fullPath = buff + "B" + river + "B"
	neccaryLogIndexes = []
	for i in range(fullPath):
		if fullPath[i] == "C"
			for j in range(1, jumpDist): # subtracts jumpDistance 1 bc we don't want to jump on a croc
				possible = False	
				if fullPath[i-j] == "L":
					possible = True
					neccaryLogIndexes.append([i-j, abs(j)+1]) # append the jump distance needed
					break
