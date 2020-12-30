#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5,6,77},max;
    int *ptr=arr;
    max=*ptr;
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("Array Size: %d\n",len);
    for(int i=0;i<len;i++){
        if(*(ptr+i)>max)
            max=*(ptr+i);
    }

    printf("Maximum Value: %d\n" ,max);
    return 0;
}
