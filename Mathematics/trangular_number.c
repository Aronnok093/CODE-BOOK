#include<stdio.h>
int main(){
    int term,i;
    printf("Term? ");
    scanf("%d",&term);
    for(i=1;i<=term;i++){
        printf("%d ",(int)((1*1.0/2)*(float)i*((float)i+1)));
    }

    return 0;

}
