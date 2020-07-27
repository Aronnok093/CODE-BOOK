#include<stdio.h>
int main()
{
    int a[100],b[100],sum[101];
    int first=0,second=0,rs=0;
    int reminder=0,i;
    char num1[100],num2[100];
    printf("Enter first number: ");
    scanf("%s",&num1);
    printf("Enter second number: ");
    scanf("%s",&num2);

    while(num1[first]!='\0')
    {
        a[first] = num1[first]-48;
        first++;
    }
    while(num2[second]!='\0')
    {
        b[second] = num2[second]-48;
        second++;
    }

    if(first>second)
    {
        for(i=second-1; i>=0; i--)
        {
            first--;
            sum[rs]=((a[first]+b[i])+reminder)%10;
            reminder=((a[first]+b[i])+reminder)/10;
            rs++;
        }
        while(first>0)
        {
            first--;
            sum[rs]=(a[first]+reminder)%10;
            reminder=(a[first]+reminder)/10;


        }
        if(reminder!=0)
        {
            rs++;
            sum[rs]=reminder;

        }

    }
    else if(second>first)
    {
        for(i=first-1; i>=0; i--)
        {
            second--;
            sum[rs]=((b[second]+a[i])+reminder)%10;
            reminder=((b[second]+a[i])+reminder)/10;
            rs++;
        }
        while(second>0)
        {
            second--;
            sum[rs]=(b[second]+reminder)%10;
            reminder=(b[second]+reminder)/10;

        }
        if(reminder!=0)
        {
            rs++;
            sum[rs]=reminder;
        }
    }
    else
    {
        for(i=second-1;i>=0;i--)
        {
            first--;
            sum[rs]=((a[first]+b[i])+reminder)%10;
            reminder=((a[first])+b[i])/10;
            rs++;
        }
        rs--;
        if(reminder!=0)
        {
            rs++;
            sum[rs]=reminder;
        }
    }


    printf("Sum of both number is: ");
    for(i=rs; i>=0; i--)
    {
        printf("%d",sum[i]);
    }
    return 0;
}
