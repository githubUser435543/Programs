#!/bin/python3
import sys
input = sys.stdin.readline
print = sys.stdout.write
cowlist = [] # will represnt each cow as it's productivity

lines = int(input())
for line in range(lines):
    numCows, production = map(int, input().split())
    cowlist.append(tuple([production, numCows]))

cowlist.sort()
finalList = []
for item in cowlist:
    separatedProduction = " " + str(item[0]) + " "
    finalList += list(map(int, (separatedProduction*item[1]).split()))

def findHighSum(arr):
    highest = arr[0] + arr[len(arr)-1] 
    for i in range(len(arr)):
        for j in range(-1, 0-(len(arr)+1), -1):
            if i > j:
                brealsadfjk
            numSum = arr[i] + arr[j]
            if numSum > highest:
                highest = numSum
    return highest

print(str(findHighSum(finalList) + "\n"))