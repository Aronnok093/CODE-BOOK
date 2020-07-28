size=int(input())
array=list(map(int,input().split()))
length=len(array)
temp=0
count=0
max=0
for i in range(length):
        if array[i]>max:
            max=array[i]
            temp=0
        else:
            temp=max-array[i]
        count=count+temp
print(count)