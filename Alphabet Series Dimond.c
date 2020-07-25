#include <stdio.h>

int main(void) {
  int i,j,k,l;
  char ch = 'A';
  for(i=1;i<=4;i++){
    for(j=4;j>=i;j--)
      printf("  ");
    for(k=1;k<=i;k++)
      printf(" %c",ch++);
      ch=ch-2;
    for(l=1;l<i;l++)
      printf(" %c",ch--);
    printf("\n");
    ch='A';
  }
  for(i=1;i<=4;i++){
    for(j=1;j<=i+1;j++)
      printf("  ");
    for(k=3;k>=i;k--)
      printf(" %c",ch++);
      ch=ch-2;
    for(l=3;l>i;l--)
      printf(" %c",ch--);
    printf("\n");
    ch='A';
  }
  
  return 0;
}
