import math
t=int(input())
while t>0:
    t-=1
    a=int(input())
    k=int(math.floor(math.log2(a)))
    print(2**k-1)