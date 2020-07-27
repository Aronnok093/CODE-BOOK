#include<stdio.h>
#include<math.h>
int factorial(long long int x){
    if(x==0){
        return 1;
    }
    if(x==1){
        return 1;
    }
    return x*factorial(x-1);
}
int main(){
    long long int i,term,x;
    float sum=0.0,pr;
    printf("term?x?");
    scanf("%lld%lld",&term,&x);
    for(i=0;i<term;i++){
        pr=2.0*(float)i;
        sum=sum+pow((float)x,pr)/factorial((long long int)pr);
    }
    printf("%f",sum);
}
