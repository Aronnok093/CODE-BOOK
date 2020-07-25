number=int(input())
while True:
    print(int(number),end=" ")
    if number==1:
        break
    if number%2==0:
        number = number/2
    else:
        number=number*3+1
