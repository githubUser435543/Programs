#!/bin/python3

cases = int(input())
# if knight can't move
# if d is od knight can't
for case in range(cases):
    if (int(input()) % 2 == 0):
        print("Charge On!")
    else:
        print("Hold Your Horses!")

