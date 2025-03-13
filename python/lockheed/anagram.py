for i in range(int(input())):
    a, b = input().strip().split("|")
    if sorted(a) == sorted(b) and a != b:
        print(f"{a}|{b} = ANAGRAM")
    else:
        print(f"{a}|{b} = NOT AN ANAGRAM")
