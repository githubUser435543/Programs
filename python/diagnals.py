#!/bin/python3

for case in range(int(input())):
	sideLen, chips = map(int, input().split())
	diagonals = []
	firstDiag = True
	for i in range(sideLen):
		if sideLen < 1: break

		if firstDiag:
			diagonals.append(sideLen)
			firstDiag = False
		else:
			diagonals.append(sideLen)
			diagonals.append(sideLen)
		sideLen -= 1

	filled = 0
	while chips > 0 and len(diagonals) > 0:
		curr = diagonals[0]
		diagonals.pop(0)
		chips -= curr
		filled += 1

	print(filled)

