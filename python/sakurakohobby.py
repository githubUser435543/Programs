#!/bin/python3

def findcycle(start, arr):
	cycle = []
	cycle.append(start)
	cycle.append(arr[start])
	while arr[0] != arr[-1]:
		cycle.append(arr[cycle[-1]])
	return cycle




for c in range(int(input())):
	length = int(input())
	permutation = list(map(int, input().split()))
	blackAndWhites = input()
	res = list(map(list("0"*length)))	
	foundNodes = set()
	for i in range(permutation):

		if i in foundNodes: continue

		cycleArr = findcycle(i, permutation)

		blacksInCycle = 0
		for item in cycleArr:
			if blackAndWhites[item] == 0:
				blacksInCycle += 1
		
		currfoundNodes = set()
		for node in cycleArr:
			currfoundNodes.add(node)
			foundNodes = foundNodes.union(currfoundNodes)

		for j in res:
			if j in currfoundNodes:
				res[j] = blacksInCycle

		print(" ".join(res))
