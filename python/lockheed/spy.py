for i in range(int(input())):
    a, b = input().lower().strip().split("|")
    a = set(a)
    spy = True
    for i in b:
        if not i in "abcdefghijklmnopqrstuvwxyz": continue
        if not i in a:
            spy = False
            break

    print("You're not a secret agent!" if not spy else "That's my secret contact!")

    
