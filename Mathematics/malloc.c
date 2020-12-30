#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int *ptr;
    ptr=(int*)malloc(sizeof(int)*5);
    if(ptr)
        printf("Memory Allocation using malloc Successful\n");
    for(int i=0;i<5;i++){
        *(ptr+i)=i;
    }
    printf("Value in Dynamic Memory: \n");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }

    free(ptr);

}
