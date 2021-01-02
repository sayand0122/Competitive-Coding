p = list()
b = list()
c = list()
for i in range(2, 1000):

    flag = 1

    for j in range(2, ((i // 2) + 1)):
        if (i % j == 0):
            flag = 0
            break

    if (flag == 1):
        p.append(i)
# print(len(p))
#print(p, end='')

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = p[:n]
    print(b, end=" ")
    print("\n")
    for i in range(0, n):
        k = a[i]
        c.append(b[k-1])
print(c, end=" ")
