tc = int(input())
while(tc > 0):
    n, k = map(int, input().split())
    s = input()
    p = k+1
    i = 0
    j = 0
    ans = 0
    c = 0
    if(len(s) == 1):
        ans = 0
    else:
        while(i < n and j < n):
            if(s[i] == "M"):
                if(s[j] == "I"):

                    if(i > j):
                        for t in range(j, i+1):
                            if(s[t] == ':'):
                                c = c+1
                    else:
                        for t in range(i, j+1):
                            if(s[t] == ':'):
                                c = c+1

                    f = p-abs(i-j)-c
                    if(f > 0):
                        c = 0
                        ans = ans+1
                        i = i+1
                        j = j+1
                    else:
                        c = 0
                        if(i > j):
                            j = j+1
                        else:
                            i = i+1
                elif(s[j] == "X"):
                    i = j
                    i = i+1
                    j = j+1
                    c = 0
                else:
                    j = j+1
            elif(s[i] == "X"):
                j = i
                c = 0
                i = i+1
                j = j+1

            else:
                i = i+1

    print(ans)

    tc = tc-1
