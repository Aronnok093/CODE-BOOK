#include<stdio.h>
#include<stdlib.h>
int main(){
    int term,*x,sumOdd,sumEven,i;
    long N,K;
    x=(int*)malloc(N*sizeof(int));
    scanf("%d",&term);
    while(term!=0){
            sumEven=sumOdd=0;
        scanf("%ld%ld",&N,&K);
        for(i=0;i<N;i++){
            scanf("%d",&x[i]);
        }
        for(i=0;i<N-1;i=i+2){
            sumOdd=sumOdd+x[i];
            sumEven=sumEven+x[i+1];
        }
        if(sumOdd>=K){
            printf("Mina Win\n");
        }
        else if(sumEven>=K){
            printf("Raju Win\n");
        }
        else{
            printf("Mithu Win\n");
        }
    }
    free(x);
    return 0;
}
