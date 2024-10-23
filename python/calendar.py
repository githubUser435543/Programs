#!/bin/python3

cases = int(input())


for case in range(cases):
	comboSums = []

	def odom(arr, k):
		if k == len(arr):
			h = 4


	calenderMade = False
	catpics = int(input())
	intrest = list(map(int, input().split()))
	factorsList = [0] # 0 so we can check everything alone
	for item in intrest:
		factors = 0
		if (item % 365 == 0):
			factors = factors & 4
		if (item % 30 == 0):
			factors = factors & 2
		if (item % 7 == 0):
			factors = factors & 1
		factorsList.append(factors)

	setBreak = False
	for item in factorsList:
		for item2 in factorsList:
			if item2 & item == 7:
				calenderMade = True
				setBreak = True
				break
		if setBreak: break

	if calenderMade:
		print(":)")
	else:
		print(":(")
