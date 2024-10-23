#!/bin/python3.11
cases: int = int(input())

for case in range(cases):
    allBlackoutDays: [int] = []
    blackoutRanges: int = int(input())
    for blackoutRange in range(blackoutRanges):
        start, end = list(map(int, input().split())) # inclusive add one to end when using range()
        allBlackoutDays += list(range(start, end + 1))
    visitDays: int = int(input())
    for visitDay in range(visitDays):
        day = int(input())
        blackoutDay = False
        for item in allBlackoutDays:
            if item == day:
                blackoutDay = True
                break
        if blackoutDay: 
            print("no")
        else:
            print("yes")
        

    

        


