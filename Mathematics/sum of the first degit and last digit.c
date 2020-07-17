#include<stdio.h>
#define sf scanf // macro declaration
#define pf printf
int main(){
    int num,sum=0;
    pf("\nEnter 4 digit number :\n");
    sf("%d",&num);
    sum=sum+(num%10);
    sum=sum+(num/1000);
    pf("%d\n",sum);
}
