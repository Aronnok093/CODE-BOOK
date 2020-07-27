a=input("Number 1 = ")
b=input("Number 2 = ")
a=list(a)
b=list(b)
carry=0
le1=len(a)
le2=len(b)
sum=[]
if le1>le2:
    while le2>0:
        le2=le2-1
        le1=le1-1
        sum.append(int((int(a[le1])+int(b[le2])+carry)%10))
        carry=int((int(a[le1])+int(b[le2])+carry)/10)
    while le1>0:
        le1=le1-1
        sum.append(int((int(a[le1])+carry)%10))
        carry=int((int(a[le1])+carry)/10)
    if carry<0:
        sum.append(int(carry))
if le1<le2:
    while le1>0:
        le2=le2-1
        le1=le1-1
        sum.append(int((int(b[le2])+int(a[le1])+carry)%10))
        carry=int((int(b[le2])+carry)/10)
    while le2>0:
        le2=le2-1
        sum.append(int(int(b[le2])+carry)%10)
        carry=int((int(b[le2])+carry)/10)
    if carry<0:
        sum.append(carry)
if le1==le2:
    while le2>0:
        le2=le2-1
        le1=le1-1
        sum.append(int((int(a[le1])+int(b[le2])+carry)%10))
        carry=int((int(a[le1])+int(b[le2])+carry)/10)
    if carry<0:
        sum.append(int(carry))
length=len(sum)      
while length!=0:
    length=length-1
    print(sum[length],end="")
    
        

            
