t = int(input())
for _ in range(t):
    n = int(input())
    l = []
    for i in range(n):
        l.append(i+1)
    l.reverse()
    if n % 2 == 0:
        for i in l:
            print(i, end=" ")
    else:
        x = n//2
        tmp = l.pop(x)
        l.append(tmp)
        for i in l:
            print(i, end=" ")
    print('\n')
