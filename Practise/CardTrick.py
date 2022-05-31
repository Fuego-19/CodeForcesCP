 
for _ in range(int(input())):
    
    n = int(input())
    
    cards = list(map(int, input().split()))
    
    m = int(input())
    
    shuffle = list(map(int, input().split()))
            
    for i in shuffle: 
        
        for j in range(i):
            temp = cards.pop(0)
            cards.append(temp)
            
    # for i in cards:
    #     print(i)
    # print("\n\nskdfjksdf")
    print(cards.pop(0))