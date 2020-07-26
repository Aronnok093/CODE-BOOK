//Aronnok093
#include <stdio.h>

int main(void) {
  int i=1,num,temp,sum,pow;
  while(i<=1000){
    sum=0;
    temp=i;
    while(temp!=0){
      pow=temp%10;
      temp=temp/10;
      sum=sum+(pow*pow*pow);

    }
    if(sum==i){
      printf("%d ",i);
    }
    i++;

  }
  return 0;
}
