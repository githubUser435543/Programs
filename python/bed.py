#!/usr/local/pypy
cases = int(input())

for case in range(cases):
    students, bedtime = list(map(int, input().split()))
    sleeptimes = list(map(int, input().split()))
    latest = sleeptimes[0]
    for sleeper in sleeptimes:
        if sleeper > latest:
            latest = sleeper
    if latest > bedtime:
        print(latest-bedtime)
    else:
        print("All campers went to bed on time!")
