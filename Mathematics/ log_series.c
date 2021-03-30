#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the range of number(Limit):");
    scanf("%d",&n);
    printf("\n");
    while(i<=n)
    {
     printf("log(%d)",i*i*i);
     printf(" + ");

     i++;
    }
    printf("\n");
}
