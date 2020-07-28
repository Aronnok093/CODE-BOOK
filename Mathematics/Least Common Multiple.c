#include <stdio.h>

int main(void) {

  int x,y,temp;
  printf("x?y? ");
  scanf("%d%d",&x,&y);

  if(x>y){
    temp=x;

  }else{

    temp=y;

  }
  repeat: 
      if(temp%x==0 && temp%y==0){

        printf("Least Common Multiple : %d\n",temp);

      }else{

        temp=temp+1;
        goto repeat;

      }
  return 0;
}
