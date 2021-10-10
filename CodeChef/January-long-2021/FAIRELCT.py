t = int(input())
while(t > 0):
    n, m = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    if sum(a) > sum(b):
        print(0)
    else:
        posa = 0
        posb = m-1
        a.sort()
        b.sort()

        while sum(a) < sum(b):
            tmp = a[posa]
            a[posa] = b[posb]
            b[posb] = tmp

            a.sort()
            b.sort()

            posb -= 1
            posa += 1
        print(posa)
    t -= 1
