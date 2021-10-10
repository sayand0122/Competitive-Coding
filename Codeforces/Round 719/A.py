t=int(input())
while(t>0):
    t-=1
    n=int(input())
    s=input()
    s+=" "
    k=[]
    for i in range(n): #Taking unique consecutive charcters grom string
        if s[i]==s[i+1]:
            continue
        else:
            k.append(s[i])
    
    kl=len(k)
    s1=set(k)
    s1l=len(s1)
    if kl==s1l:
        print("Yes")
    else:
        print("No")

