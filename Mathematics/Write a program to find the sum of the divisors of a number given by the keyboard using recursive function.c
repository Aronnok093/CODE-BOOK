#include<stdio.h>
int factor(int n, int i,int sum){
    if(i<=n){
        if(n%i==0){
         sum=sum+i;
        }
        factor(n,i+1,sum);
    }
    else{
    printf("%d ",sum);
    }
}
int main(){
    int num,sum=0;
    scanf("%d",&num);
    factor(num,1,sum);
}
