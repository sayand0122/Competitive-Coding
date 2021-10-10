t=int(input())
while(t>0):
    l=int(input())
    s=input()
    cnt=0
    ans="NO"
    for i in range(l):
        x=(int)(s[i])
        if x==1:
            cnt+=1
            res=(cnt*100)//(i+1)
            if res>=50:
                ans="YES"
                break
    print(ans)
    t-=1

