def getDuplicatesWithCount(listOfElems):
    dictOfElems = dict()
    for elem in listOfElems:
        if elem in dictOfElems:
            dictOfElems[elem] += 1
        else:
            dictOfElems[elem] = 1
    dictOfElems = {key: value for key,
                   value in dictOfElems.items() if value > 0}
    return dictOfElems


t = int(input())
for _ in range(t):
    res = []
    k = flag = 0
    n = int(input())
    l = list(map(int, input().split()))
    tmp = l.copy()
    d = getDuplicatesWithCount(tmp)
    for key, value in d.items():
        if(value == 1):
            res.append(key)
    if(len(res) == 0):
        print(-1)
        continue
    else:
        k = min(res)
    for i in range(n):
        if k == l[i]:
            pos = i+1
            flag = 1
            break
        else:
            pos = -1
    print(pos)
