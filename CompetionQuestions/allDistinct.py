 
for _ in range(int(input())):
    
    n = int(input())
    
    arr = list(map(int, input().split()))
    
    dic = {}
    
    count = 0
    for i in arr:
        dic[i] = 0
    for j in arr:
        dic[j] += 1
        


    
    
    if( n - len(dic))%2 == 0:
        count = len(dic)
    else:
        count = len(dic ) - 1
        
    print(count)