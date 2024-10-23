#!/bin/python3.11
cases: int = int(input())
for case in range(cases):
    goingToUcf: int = 0
    students: int = int(input())
    for student in range(students): 
        if input().strip() == "ucf": goingToUcf += 1
    print(goingToUcf)
