#include<stdio.h>
find_fib(int n);
int main(){
    int i;
    for(i=0;i<25;i++)
        printf("%d\n",find_fib(i));

}
find_fib(int n){
    if(n<=2)
        return 1;
    else
        return find_fib(n-1)+find_fib(n-2); //function->f(n-1)+f(n-2)
}
