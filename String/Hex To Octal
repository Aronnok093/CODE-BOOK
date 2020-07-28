#include <stdio.h>
#include<math.h>

int main() {

  char hex[100];
  int i,len=0,decimal=0,erge,octal;
  printf("Input Hexadecimal Value:");
  scanf("%s",&hex);

  while(hex[len]!='\0'){len++;}
  erge=len;

  for(i=0;i<=erge;i++,len--){

    if('A'<=hex[i]&&hex[i]<='Z'){

      decimal=decimal+((hex[i]-55)*pow(16.0,(float)len-1));

    }else if('a'<=hex[i]&&hex[i]<='z'){

      decimal=decimal+((hex[i]-87)*pow(16.0,(float)len-1));

    }else if('1'<=hex[i]&&hex[i]<='9'){

      decimal=decimal+((hex[i]-'0')*pow(16.0,(float)len-1));

    }
  }
  i=1;
  while(decimal!=0){

    octal=octal+(decimal%8)*i;
    decimal=decimal/8;
    i*=10;
  }

  printf("\n\t%d\n",octal);
  return 0;
}
