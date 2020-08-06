#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int len,i=0,j;
    scanf("%s",&name);
    len=strlen(name);
    while(name[i]!='\0'){
        for(j=0;j<=i;j++){
            printf("%c",name[j]);
        }
        i++;
        printf("\n");
    }


}
