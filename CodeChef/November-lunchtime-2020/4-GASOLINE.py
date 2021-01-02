# https://www.codechef.com/LTIME90B/problems/GASOLINE

# AC

t = int(input())
for T in range(t):
    nu = int(input())
    fuel = list(map(int, input().split()))
    coin = list(map(int, input().split()))
    a = []
    for i in range(len(coin)):
        a.append((coin[i], fuel[i]))
    sorta = sorted(a)
    cnt = 0
    ans = 0
    for i in range(len(sorta)):
        if cnt >= nu:
            break
        if sorta[i][1] != 0:
            if cnt+sorta[i][1] > nu:
                b = nu-cnt
                cnt = nu
            else:
                cnt += sorta[i][1]
                b = sorta[i][1]
            ans += b*sorta[i][0]
    print(ans)
