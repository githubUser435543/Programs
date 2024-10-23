#!/bin/python3
class Judge:
    def __init__(self, name, points):
        self.name = name
        self.points = points

    def __lt__(self, other):
        return other.points < self.points or (self.points == other.points and self.name < other.name)


for case in range(int(input())):
    judges = []

    for jud in range(int(input())):
        jname, pmade, pverif, ajud, printed = input().split()
        pmade = int(pmade)
        pverif = int(pverif)
        ajud = int(ajud)
        printed = int(printed)
        jpoints = pmade*10 + pverif*4 + ajud*25 + printed*7
        judges.append(Judge(jname, jpoints))

    judges.sort()
    
    for item in judges:
        print(item.name)

# sqrt(x1-x2 
