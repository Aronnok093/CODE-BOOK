//WAP to find out the sum of the //following series:
//a + ar + ar2 + ar3+…………+ar(n-1)
//Aronnok093
#include<stdio.h>
#include<math.h>
int main(){
  float a,r,sum=0.0;
  int t;
  printf("Term=?a=?b=? ");
  scanf("%d%f%f",&t,&a,&r);
  float i=0;
  while(t--){
    sum=sum+a*pow(r,i);
    i+=1;
  }
  printf("%f\n",sum);
  return 0;
}
