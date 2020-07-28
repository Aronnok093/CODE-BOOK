
#include <stdio.h>

int reverseDigits(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int square(int num)
{
    return (num * num);
}

int checkAdamNumber(int num)
{
    int a = square(num);
    int b = square(reverseDigits(num));
    if (a == reverseDigits(b))
    return 1;
    return 0;
}

int main()
{
    int i,x;
    for(i=10;i<=100;i++){

    x=checkAdamNumber(i);
    if(x==1){
        printf("%d\n",i);
        }
    }

    return 0;
}
