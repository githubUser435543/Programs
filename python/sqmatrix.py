#!/bin/python3
import math
for c in range(int(input())):
	matrixSize = int(input())
	sideSize = int(math.sqrt(matrixSize))
	string = input()
	sqmatrixstr = ""
	for r in range(sideSize):
		if r == 0 or r == sideSize - 1:
			sqmatrixstr += "1"*sideSize
		else:
			newrow = list("0"*sideSize)
			newrow[0] = "1"
			newrow[-1] = "1"
			newrow = "".join(newrow)
			sqmatrixstr += newrow

	if sqmatrixstr == string:
		print("yEs")
	else:
		print("nO")
	