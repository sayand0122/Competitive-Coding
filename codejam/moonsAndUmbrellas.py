for j in range(1, int(input())+1):
    temp = input().strip().split(" ")
    x, y, s = int(temp[0]), int(temp[1]), temp[2]
    c = 0
    a = 0
    for i in range(len(s)-1):
        if(s[i] == 'J'):
            if(s[i+1] == 'C'):
                c = c+y
            if (s[i + 1] == '?'):
                s = s.replace('?', 'J', 1)
        if (s[i] == 'C'):
            if (s[i + 1] == 'J'):
                c = c+x
            if(s[i+1] == '?'):
                s = s.replace('?', 'C', 1)
        if(s[i] == '?'):
            a = a+1
            if(s[i+1] == 'C'):
                s = s.replace('?', 'C', a)
                a = 0
            if(s[i+1] == 'J'):
                s = s.replace('?', 'J', a)
                a = 0
    print("Case #{}: {}".format(j, c))
