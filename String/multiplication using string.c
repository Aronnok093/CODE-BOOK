#include<stdio.h>
void main()
{
    int n1[100], n2[100], res[200] = {0};
    char num1[100], num2[100];
    int first=0,second=0,r=0, reminder = 0, i, j, index = 0, temp,y;

    printf("Enter first number : ");
    scanf("%s",&num1);
    printf("Enter second number : ");
    scanf("%s",&num2);

    while(num1[first] != '\0')
    {
        n1[first] = num1[first] - 48;
        first++;
    }

    while(num2[second] != '\0')
    {
        n2[second] = num2[second] - 48;
        second++;
    }

    temp = 0;
    for(i=second-1; i>=0; i--)
    {
        r = temp;
        reminder = 0;
        for(j=first-1; j>=0; j--)
        {
            y = res[r] + (n2[i] * n1[j]) + reminder;
            res[r] = (y%10);
            reminder = (y)/10;
            r++;
        }
        res[r] = reminder;
        temp++;
        index = r;
    }

    for(i=index; i>=0; i--)
    {
        printf("%d",res[i]);
    }
}
