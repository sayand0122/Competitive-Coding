# from math import *
# import math

# n = int(input())

# c = math.ceil(math.sqrt(n))
# while n % c != 0:
#     n += 1

# print(c+n//c)


# import math as m
# test = int(input())
# for i in range(test):
#     n = int(input())
#     q = m.sqrt(n)
#     q = int(q)
#     count = []
#     for y in range(1, q+1):
#         if(n % y) == 0:
#             count.append(y+(n//y))
#     count.sort()
#     print(count[0])


# from math import *
# try:
#     t = int(input())
#     l = []
#     for _ in range(t):
#         n = int(input())
#         sqroot = floor(sqrt(n))
#         for i in range(sqroot, n):
#             if n % i == 0 and i != (n//i):
#                 l.append(i+(n//i))
#         if(len(l) == 0):
#             print(n+1)
#         else:
#             print(min(l))
#         l = []
# except:
#     pass

try:
    for _ in range(int(input())):
        sum = 1e18
        n = int(input())
        x = n+1
        sqroot = int(n**0.5)
        for i in range(1, sqroot):
            if n % i == 0:
                if i == (n//i):
                    continue
                else:
                    sum = i+(n//i)
            x = min(x, sum)
        print(x)
except:
    pass
