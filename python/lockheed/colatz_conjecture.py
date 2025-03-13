for c in range(int(input())):
    n = int(input())
    c = n
    length = 1
    while c != 1:
        c = c*3 + 1 if c & 1 else c // 2
        length += 1
    print(f"{n}:{length}")

