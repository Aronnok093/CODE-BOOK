#include<stdio.h>
int main(){
    int *arr,i,j,n,temp;
    arr=(int*)malloc(n*sizeof(int));
    printf("How Many Nmber:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
