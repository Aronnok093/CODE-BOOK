#include<stdio.h>
#define max 100
int main(){
        int array[max],new_array[max],index;
        printf("Index?!");
        scanf("%d",&index);
        int i;
        for(i=0;i<index;i++){
            scanf("%d",&array[i]);
        }
        int j;
        int multiply;
        for(i=0;i<index;i++){
            multiply=1;
            for(j=0;j<index;j++){
                if(i==j)
                    continue;
                else{
                    multiply=multiply*array[j];
                }
            }
            new_array[i]=multiply;
        }
        for(i=0;i<index;i++){

            printf("%d ",new_array[i]);
        }



}
