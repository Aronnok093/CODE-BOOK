#include <stdio.h>
/* while(b!=0)
    {
        temp = b;
        b = a%b;   /// fast way to find gcd;
        a = temp;
    }
    return a; */

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
