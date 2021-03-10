n = list(map(int, input().split()))
res = []
for i in range(len(n)-1):
    if n[i]+1 == n[i+1]:
        res.append(n[i])
    else:
        res = []
print(res)
