#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int main(){
    char arr[max],cha,chaup,chalow;
    printf("GIVE ME A STRING: ");
    gets(arr);
    printf("TARGET CHARECTER: ");
    cha=getchar();
    chaup=toupper(cha);
    chalow=tolower(cha);
    int i;
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==chalow)
            arr[i]=arr[i]-32;

        else if(arr[i]==chaup)
            arr[i]=arr[i]+32;
    }
    puts(arr);
}
