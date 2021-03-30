#include<stdio.h>
int main(){
    int *arr,count=0,sum=0,sumPo=0,sumPe=0,n,i;
    arr=(int*)malloc(n*sizeof(int));
    printf("How Many Nmber:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
            if(arr[i]<0){

                sum=sum+arr[i];

            }else if(arr[i]%2==0){

                sumPe=sumPe+arr[i];

            }else{

                sumPo=sumPo+arr[i];
            }

    }
    printf("Sum of Negative Number %d\n",sum);
    printf("sum of Positive Even Number %d\n",sumPe);
    printf("sum of positive Odd Number %d\n",sumPo);
}
