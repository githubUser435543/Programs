#!/bin/python3
for case in range(int(input())):
	arr = list(map(int, input().split())) # 2 3 4  =24
	for i in range(5):
		arr.sort()
		arr[0] += 1
	print(arr[0]*arr[1]*arr[2])

