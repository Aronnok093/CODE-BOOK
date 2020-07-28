#include <stdio.h>

int main(void) {
  int x,y,i,gcd;
  printf("x?y?\n");
  scanf("%d%d",&x,&y);
  for(i=1;i<=x&&i<=y;i++){
    if(x%i==0 && y%i==0){
      gcd=i;
    }
  }
  printf("Greatest common Divisor: %d\n",gcd);
  return 0;
}
