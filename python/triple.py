#!/bin/python3
for c in range(int(input())):
	a, b = map(int, input().split())
	operations = 0

	while not (a + b == 0):
		if a > b and b != 0:
			b // 3
			a * 3
		elif a < b and a != 0:
			a // 3
			b * 3
		elif a == 0:
			b // 3
		else:
			a // 3
		operations += 1

	print(operations)
