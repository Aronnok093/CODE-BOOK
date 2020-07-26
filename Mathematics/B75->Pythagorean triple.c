include <stdio.h>

int main(void) {
  int n,m=2,a,b,c=0;
  printf("a b c\n");
  printf("- - -\n");
  while(c<1000){
    for(n=1;n<m;n++){
      a=m*m-n*n;
      b=2*m*n;
      c=m*m+n*n;
      if (c >1000) 
        break; 
      if(c>=100)
        printf("%d %d %d\n",a,b,c);
  }
  m++;
  }
  return 0;
}
