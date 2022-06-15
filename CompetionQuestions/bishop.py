 
for _ in range(int(input())):
    
    input()
    arr = list()
    for i in range(8):
        
        arr.append(list(input()))
        
    # for t in arr
        # print(t)
    atk = []
    for k in range(1,9):
        for j in range(1,9):
            if(arr[k - 1][j - 1] == '#'):
                temp = []
                temp.append(k)
                temp.append(j)
                atk.append(temp)
    unq = []
    for m in range(1,len(atk) - 1):
        if(atk[m][0] != atk[m+1][0] and atk[m - 1][0] != atk[m][0]):
            if(atk[m][1]!= atk[m+1][1] and atk[m][1]!= atk[m- 1][1]):
                unq.append(atk[m])
    flag = True
    for k in unq:
        flag = True
        for m in atk:
            tp = abs(m[0] - k[0])
            tp2 = abs(m[1] - k[1])
            
            if(tp != tp2):
                flag = False
        if(flag):
            print(k[0], "\t", k[1])
            break
