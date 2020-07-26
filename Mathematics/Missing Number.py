term=int(input())
li=list(map(int,input().split()))
new_li=[]
for i in range(1,term+1):
    new_li.append(i)
print(list(set(li) ^ set(new_li))[0])

