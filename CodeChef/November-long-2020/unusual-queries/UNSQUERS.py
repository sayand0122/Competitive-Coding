num, que, satis = map(int, input().split())
last = 0
a = list(map(int, input().split()))
for _ in range(que):
    x, y = map(int, input().split())
    L = (x+(satis*last)-1) % num+1
    R = (y+(satis*last)-1) % num+1
    if(L > R):
        L, R = R, L
    for i in range(num):
        for j in range(i+1, num):
            q = 0
            m = []
            for k in range(i, j-1):
                ans = 1
                temp = a[k]
                for l in range(k+1, j-1):
                    if a[l] > temp:
                        temp = a[l]
                        ans += 1
                m.insert(q, ans)
                q += 1
            m.sort()
    temp = ans = l = 0
    b = []
    for y in range(L-1, R):
        ans = 1
        temp = a[y]
        for j in range(y+1, R):
            if a[j] > temp:
                temp = a[j]
                ans += 1
        b.insert(l, ans)
        l += 1
    b.sort()
    print(b[l-1])
    last = b[l-1]
