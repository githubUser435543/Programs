#!/bin/python3

cases = int(input())

def rmdupe0s(arr):
	last = 1
	goodList = []
	for item in arr:
		if last == 1 or item == 1:
			#print("item:", item)
			goodList.append(item)
			last = item;
	return goodList

def onesGreater(arr):
	#print(arr)
	ones = 0
	zeros = 0
	for item in arr:
		if item == 1:
			ones += 1
		else:
			zeros += 1
	#print("ones:", ones)
	#print("zeros:", zeros)
	if ones > zeros:
		return True
	else: 
		return False

for case in range(cases):
	amount = int(input())
	bitArr = list(map(int, list(input().strip())))
	#print(bitArr)
	finalArr = rmdupe0s(bitArr)
	if onesGreater(finalArr):
		print("YES")
	else:
		print("NO")