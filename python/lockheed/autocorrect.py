def hamming(s1, s2):
    return sum(map(lambda x, y: x != y, s1, s2))

for c in range(int(input())):
    corrects = dict()

    n, m = map(int, input().split())

    for i in range(n):
        cc = input().strip()
        if (len(cc) not in corrects):
            corrects[len(cc)] = [cc]
        else:
            tmp = corrects[len(cc)]
            tmp.append(cc)
            corrects[len(cc)] = tmp
    for i in range(m):
        curr = input().strip()
        possibles = corrects[len(curr)]
        minIndex = -1
        for j in range(len(possibles)):
            minIndex = (minIndex if hamming(possibles[minIndex], curr) < hamming(possibles[j], curr) else j)
        print(possibles[minIndex])




    
