//create a text file maned TEST in a same path and write something there.Dont forget to save it 
#include<stdio.h>
int main(){
    char text;
    FILE * fs;
    int ps,i=1;
    fs=fopen("TEST.TXT","r");

    if(fs==NULL){
        printf("Cant Open");
    }

    fseek(fs,0,SEEK_END);
    ps=ftell(fs);

    while(i!=ps){
        fseek(fs,-i,SEEK_END);
        text=fgetc(fs);
        printf("%c",text);
        i++;
    }
}
