t = input()
t = int(t)
while t > 0:
    t = t-1
    count = 0
    s = input()
    for x in s:
        if x == 'U':
            count +=1
        if x == 'D':
            break
    print(count)
        
