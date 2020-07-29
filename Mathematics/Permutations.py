num=int(input())
ans=[]
ans1=[]
arr=[]
for i in range(1,num+1):
    if i%2==0:
        ans.append(i)
    else:
        ans1.append(i)
if num==1:
    print(num)
    exit(0)
if abs(ans[-1]-ans1[0])==1:
    print("NO SOLUTION")
    exit(0)
else:
    arr=ans+ans1
    print(*arr,)
    
