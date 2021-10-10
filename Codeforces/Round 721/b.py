t=int(input())
while t>0:
    t-=1
    n=int(input())
    lst=[int(x) for x in input().split()]
    z=lst.count('0')
    if z==1:
        print('BOB')
        continue
    d=z%2
    if d==0:
        print('BOB')
    if d==1:
        print('ALICE')

