#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int i,j,len;
    gets(name);
    len=strlen(name);
    printf("\n");
    while(len--){
        for(i=0;i<=len;i++){
            printf("%c",name[i]);
        }
        printf("\n");
    }
}
