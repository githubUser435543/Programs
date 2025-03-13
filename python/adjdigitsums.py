for i in range(int(input())):
    yes = 0
    x, y = map(int, input().split())
    nines = x // 9
    for j in range(nines + 1):
        resY = x + 1 - (j * 9)
        if resY == y:
            yes = 1
            break
    print("yEs" if yes else "nO")

