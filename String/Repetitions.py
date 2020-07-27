li=input()
li=list(li)
le=len(li)
count=1
flag=1
for i in range(le-1):
    if li[i]==li[i+1]:
        count+=1
        if count > flag:
            flag=count
    if li[i]!=li[i+1]:
        count=1
print(flag)
    


