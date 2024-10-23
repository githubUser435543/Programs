#!/bin/python3
import math
import sys

input = sys.stdin.readline
print = sys.stdout.write

def distanceFormula(point1, point2):
    return math.sqrt((point1[0]-point2[0])**2 + (point1[1]-point2[1])**2)

cases = int(input())
for case in range(cases):
    firstBoltPoints = []
    secondBoltPoints = []
    for bolt in range(int(input())):
        firstBoltPoints.append(list(map(int, input().split())))

    for bolt in range(int(input())):
        secondBoltPoints.append(list(map(int, input().split())))

    biggestDistance = distanceFormula(firstBoltPoints[0], secondBoltPoints[0])

    for item1 in firstBoltPoints:
        for item2 in secondBoltPoints:
            distance = distanceFormula(item1, item2) #wbhs
            if distance > biggestDistance:
                biggestDistance = distance
    print(str(biggestDistance) + "\n")