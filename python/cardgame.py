#!/bin/python3
for c in range(int(input())):
	a1, a2, b1, b2 = map(int, input().split())
	gamesWon = 0

	pair1 = 0
	pair2 = 0

	if a1 > b1: pair1 += 1
	elif a1 < b1: pair1 -= 1

	if a2 > b2: pair1 += 1
	elif a2 < b2: pair1 -= 1

	if a1 > b2: pair2 += 1
	elif a1 < b2: pair2 -= 1

	if a2 > b1: pair2 += 1
	elif a2 < b1: pair2 -= 1

	if pair1 > 0: gamesWon += 2
	if pair2 > 0: gamesWon += 2
	
	print(gamesWon)