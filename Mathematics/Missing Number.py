term=int(input())
li=list(map(int,input().split()))
mini=min(li)
high=max(li)
flag=0
if term not in li:
    print(term)
    exit(0)
if len(li)==1:
    if li[0]-1==0:
        print(li[0]+1)
    else:
        print(li[0]-1)
li.sort()
for i in range(len(li)-1):
    if li[i]+1!=li[i+1]:
        print(li[i]+1)
    
