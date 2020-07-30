term=int(input())
while term !=0:
    y,x=map(int,input().split())
    if x > y:
        if x%2==1:
            ans=x*x-y+1
        else:
            x=x-1
            ans=x*x+y
        print(ans)
    else :
        if y%2==0:
            ans=y*y-x+1
        else:
            y=y-1
            ans=y*y+x
        print(ans)

    term=term-1
        

        
