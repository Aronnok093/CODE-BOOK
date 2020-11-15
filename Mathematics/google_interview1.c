#include<stdio.h>
#include<stdbool.h>
#define max 100
int check_array(int array[],int index,int k){

    int i,sum,j;
    for(i=0;i<index;i++){
        for(j=0;j<index;j++){
            sum=0;
            if(i==j)
                continue;
            else{
                sum=array[i]+array[j];
                if(sum==k)
                    return true;

            }
        }
    }

    return false;


}
int main(){
    int array[max],index,k,key_stoke;
    printf("Index?!");
    scanf("%d",&index);
    int i;
    for(i=0;i<index;i++){
        scanf("%d",&array[i]);
    }
    printf("Extra Number?!?");
    scanf("%d",&k);
    key_stoke=check_array(array,index,k);
    if(key_stoke==1){
        printf("True");
    }
    else{
        printf("False");
        }
    }

