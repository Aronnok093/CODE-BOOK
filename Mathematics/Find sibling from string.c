#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100];
  	int result, i,j;

  	printf("\n Please Enter the First String :  ");
  	gets(Str1);

  	printf("\n Please Enter the Second String :  ");
  	gets(Str2);

  	int len1,len2;

  	len1=strlen(Str1);
  	len2=strlen(Str2);

  	if(len1<len2){
        printf("NULL");
        exit(0);
  	}

  	for(j=0;Str1[j]!='\0';j++){

            if(Str1[j]==' '){
                printf("NULL");
                exit(1);
            }
  	}

  	for(i=0;i<len1;i++){

        for(j=0;j<len2;j++){

            if(Str1[i]==Str2[j]&&Str1[i+1]==Str2[j+1]){
                printf("%c",Str1[i]);
                break;
            }


        }
  	}
}
