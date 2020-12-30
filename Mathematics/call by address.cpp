//call by address
// we can shift address in call by address
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fun(int *n){
    printf("First In function: %d\n",*n);
    *(n+1)=15;
    printf("Last In function: %d\n",*(n+1));

}
int main(){
    int n=10;
    printf("Inside Main Function: %d\n",n);
    fun(&n);
    printf("After Define Function %d\n",n);
    return 0;
}
