#!/bin/python3

class Person:
	def __init__(self, name, TAorCamper, score):
		self.name = name
		self.TAorCamper = TAorCamper
		self.score = score

	def __lt__(self, other):
		return self.TAorCamper < other.TAorCamper or (other.TAorCamper == self.TAorCamper and other.score < self.score)

	def __str__(self):
		return self.name

for case in range(int(input())):
	personList = []
	players = int(input())
	for p in range(players): 
		pname, scoree = input().split()
		scoree = int(scoree)
		if (pname[0] == 'T' and pname[1] == 'A'):
			personList.append(Person(pname, "TA", scoree))
		else:
			personList.append(Person(pname, "CAMPER", scoree))
	personList.sort()
	for item in personList:
		print(str(item))
	

