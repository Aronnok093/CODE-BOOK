#include <stdio.h>
int factorial(long long int n) 
{  
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 
int main(void) {
  long long int i=1,temp,sum=0,fact;
  while(i<=1000000){
    temp=i;
    sum=0;
    while(temp!=0){
      fact=temp%10;
      temp=temp/10;
      sum=sum+factorial(fact);
    }
    if(sum==i){
      printf("%llu ",i);
    }
    i++;
  }
  return 0;
}
