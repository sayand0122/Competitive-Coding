try:
    t = int(input())
    for _ in range(t):
        n = int(input())
        l = list(map(int, input().split()))
        c = 0
        car1 = l[0]
        if(car1 == 0):
            print(0)
        else:
            for i in range(1, n):
                car1 = (car1-1)+l[i]
                c += 1
                if(car1 == 0):
                    print(c)
                    break
            if(car1 != 0):
                print(car1+c)
except:
    pass
