import math


class Astroid:
    def __init__(self, x, y):
        self.dist = math.sqrt(x**2 + y**2)
        self.x = x
        self.y = y
        
    def __lt__(self, other):
        return self.dist < other.dist

    def __str__(self):
        return f"{self.x} {self.y}"


for c in range(int(input())):
    astroids = []
    for _ in range(int(input())):
        a, b = map(int, input().split())
        astroids.append(Astroid(a, b))
    astroids.sort()
    for i in astroids: print(i)
        


