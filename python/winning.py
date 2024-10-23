#!/bin/python3

for case in range(int(input())):
	numContests, suspicion = map(int, input().split())
	contests = list(map(int, input().split())) 
	contests.sort()
	lastPicked = -10000000000
	contestsWon = 0
	for item in contests:
		if item - lastPicked > suspicion:
			lastPicked = item
			contestsWon += 1
	print(contestsWon)

