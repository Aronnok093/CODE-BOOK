#include<stdio.h>
int magicSqr(int size,int arr[][10]);
int main(){
    int size, arr[10][10];
    scanf("%d",&size);
    if(size%2==0){
        printf("\nIts only work for even numbers\n");
    }
    else{
        magicSqr(size,arr);
    }
    return 0;
}                                          // size=3;
int magicSqr(int size,int arr[][10]){           //  8  1  6 =15
                                          //  3  5  7 =15
                                          //  4  9  2 =15
    int sqr = size * size;
    int i = 0, j = size / 2, k;

    for(k=1;k<sqr;k++){
        arr[i][j]=k;
        i--;
        j++;
        if(k%size==0){
            i+=2;
            --j;
        }
        else{
            if(j==size){
                j-=size;
            }
            else if(i<0){
                i+=size;
            }
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
