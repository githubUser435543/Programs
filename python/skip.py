#!/bin/python3
for case in range(int(input())):
	money, meals, cost = map(int, (input().split()))
	mealsAte = 0
	for m in range(meals):
		if(money - cost) < 0:
			break
		else:
			money -= cost
			mealsAte += 1
	print(meals - mealsAte)