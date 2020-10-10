#include<stdio.h>
int main(){
    FILE *fs;
    char c;
    int count=0;
    fs=fopen("word.txt","r");

    if(fs==NULL)
        printf("File Cant Open");
    while(!feof(fs)){
        c=getc(fs);
        if(c==EOF) //dont needed because i used while(!feof(fs)) 
            break;
        if(c!=' ')
            printf("%c",c);
        }
    fclose(fs);
    }
