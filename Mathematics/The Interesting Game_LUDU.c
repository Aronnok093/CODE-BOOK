#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  t,n,k,num,i,sum1,sum2,check1,check2;
    scanf("%d",&t) ;
    while(t--)
    {
        sum1 = sum2 = check1 = check2 = 0;
        scanf("%d%d",&n,&k);
        for(i = 0 ; i < n ; i++)
        {
            scanf("%d",&num) ;
            if(i%2)
                sum2 = sum2 + num;
            else
                sum1 = sum1 + num;
            if(check1 == 0 && sum2 >= k)
                check2 = 1;
            if(check2 == 0 && sum1 >= k)
                check1 = 1;
        }
        if(check1)
            printf("Mina Win\n");
        if(check2)
            printf("Raju Win\n");
        if(!(check1 || check2))
            printf("Mithu Win\n");
    }
    return 0 ;
}


