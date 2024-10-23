#!/bin/python3

for c in range(int(input())):
	leng = input()
	ints = list(map(int, input().split()))
	ints.sort()
	turn = 0
	while len(ints) > 1:
		if turn % 2 == 0:
			del ints[0]
		else:
			del ints[-1]
		turn += 1
		#print(ints) # debug

	print(ints[0])