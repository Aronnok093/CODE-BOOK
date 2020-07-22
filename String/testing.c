#include<stdio.h>
int main(){
    char name[100];
    int i,count=0,j;
    printf("Enter A Name: ");
    scanf("%s",&name);
    i=0;
    while(name[i]!=NULL){
        i=i+1;
    }
    while(j<i){
        count=count+1;
        for(j=0;j<count;j++){
            printf("%c",name[j]);
        }
        printf("\n");
    }
    count=i-1;
    while(j!=0){

        for(j=0;j<count;j++){
            printf("%c",name[j]);
        }
        printf("\n");
        count=count-1;
    }
}
