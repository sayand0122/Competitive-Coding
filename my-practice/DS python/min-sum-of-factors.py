try:
    for _ in range(int(input())):
        l = []
        flag = 0
        n = int(input())
        for i in range(2, n):
            if(n % i == 0):
                flag = 1
                break
        if(flag == 0):
            print(n+1)
        else:
            sqroot = int(n**0.5)
            for i in range(sqroot, 1, -1):
                if n % i == 0 and i != (n//i):
                    print(i+(n//i))
                    break
except:
    pass