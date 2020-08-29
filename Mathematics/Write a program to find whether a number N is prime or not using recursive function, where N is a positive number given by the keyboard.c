#include<stdio.h>
int primeNotprime(int n,int i){
    if(i<n){
        if(n%i==0){
            return 0;
        }
        primeNotprime(n,i+1);
    }
    else

     return 1;
}
int main(){
    int num,temp;
    scanf("%d",&num);
    temp=primeNotprime(num,2);
    switch(temp){
        case 1:
            printf("\nPrime\n");
            break;
        default:
            printf("\nNot Prime\n");
    }
}
