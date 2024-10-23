#!/bin/python3

for c in range(int(input())):
	yappers = int(input())
	yaplist = []
	for yap in range(yappers):	yaplist.append(input().strip())
	# solution
	preSymitry = 0
	for i in range(len(yaplist)):
		substr = yaplist[i:-1]
		substr2 = list(reversed(substr))
		print(substr)
		print(substr2)
		if (substr == substr2):
			preSymitry = len(yaplist) - len(substr)
			break
	print(preSymitry)