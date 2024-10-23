#!/bin/python3
cases = range(int(input().strip()))

firstInput = []

for case in cases:
	# UID: username
	nameToUID = {}
	# UID: numBought
	UIDtoNumBought = {}

	operations, buyers = map(int, input().split())

	for operation in range(operations):
		firstInput.append(input().strip())

	for i in range(buyers): 
		name, userId = input().split()
		nameToUID[name] = str(userId)

		
	for line in firstInput:
		oneOrTwo, data = line.split()
		if oneOrTwo == "1": # buying
			UID = data[0:12]
			tickets = data[12:16]
			if UID in UIDtoNumBought:
				UIDtoNumBought[UID] += int(tickets)

			else:
				UIDtoNumBought[UID] = int(tickets)
		else:
			print(UIDtoNumBought[nameToUID[data]])



			
