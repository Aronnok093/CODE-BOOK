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
//this is comment not code.
/*f
fa
far
fard
fardi
fardin
fardin_
fardin_j
fardin_ja
fardin_jam
fardin_jama
fardin_jaman
fardin_jaman_
fardin_jaman_a
fardin_jaman_ar
fardin_jaman_aro
fardin_jaman_aron
fardin_jaman_aronn
fardin_jaman_aronno
fardin_jaman_aronnok
fardin_jaman_aronno
fardin_jaman_aronn
fardin_jaman_aron
fardin_jaman_aro
fardin_jaman_ar
fardin_jaman_a
fardin_jaman_
fardin_jaman
fardin_jama
fardin_jam
fardin_ja
fardin_j
fardin_
fardin
fardi
fard
far
fa
f
*\
