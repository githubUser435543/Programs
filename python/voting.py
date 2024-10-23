#!/bin/python3

# n = people
# q = quries
# c = canidate
# n lines w/ voting preference
input = sys.stdin.read
print = sys.stdout.write

def binarySearch(arr, searchedFor):
    start = 0
    end = len(arr)-1
    middle = len(arr)//2
    while not(start < end):
        if arr[middle] == searchedFor:
            return middle
        elif arr[middle] < searchedFor:
            start = middle
        else:
            end = middle
    return -1


case in range(int(input())):
    peoplePerLine, queries, canidates = list(map(int, input().split()))
    votes2Darray = [] # each array represents
    for canidate in range(canidates):
        votes2Darray.append([])
    votingPreferences = list(map(int, input().split()))
    for i in range(votingPreferences):
        votes2Darray[votingPreferences[i]-1].append(i)
    for q in range(queries):
        start, end, target = map(int, input().split())
        currentCanidate = votes2Darray[target-1]
        amountInRange = 0
        search = -1
        finished = True
        foundVoter = 0
        for i in range(start-1, end):
            search = binarySearch(currentCanidate, i)
            if (search != -1):
                amountInRange += 1
                finished = false
                foundVoter = search
                break
            else:



            
        

        
