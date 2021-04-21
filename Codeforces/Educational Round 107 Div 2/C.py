n, q = [int(i) for i in input().split()]
deck = [int(i) for i in input().split()]
queries = [int(i) for i in input().split()]

clrfst = [-1]*50
for i, clr in enumerate(deck):
    if clrfst[clr-1] == -1:
        clrfst[clr-1] = i

ans = ["0"]*len(queries)
at = [0]*50


for i, clr in enumerate(queries):
    at = clrfst[clr-1]
    for j in range(50):
        if clrfst[j] == -1 or clrfst[j] > at:
            continue
        clrfst[j] += 1
    clrfst[clr-1] = 0
    ans[i] = str(1+at)

print(" ".join(ans))
