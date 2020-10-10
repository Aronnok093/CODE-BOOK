#include<stdio.h>
int main(){
    char text;
    FILE * fs;
    fs=fopen("TEST.TXT","r");

    if(fs==NULL){
        printf("Cant Open");
    }

    while(!feof(fs)){

        text=fgetc(fs);
        printf("%c",text);
    }
}
