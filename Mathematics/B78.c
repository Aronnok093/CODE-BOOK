#include<stdio.h>
int primeOrNot(int num);
int factorial(int num);
int oddEven(int num);
int main(){
    int key,num;
    printf("Enter\n1->factorial\n2->prime_not_prime\n3->oddEven\n4->Exit\n");
    scanf("%d",&key);
    if(key==1){
        printf("Enter Integer ");
        scanf("%d",&num);
        factorial(num);
        printf("factorial: %d",factorial(num));
    }
    else if(key==2){
        printf("Enter Integer ");
        scanf("%d",&num);
        primeOrNot(num);
    }
    else if(key==3){
        printf("Enter Integer ");
        scanf("%d",&num);
        oddEven(num);
    }
    else if(key==4){
        exit(1);
    }

}
int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*factorial(num-1);

}
 int primeOrNot(num){
     int i,flag=0;
     for(i=2;i<num;i++){
        if(num%i==0){
            printf("\nNot Prime\n");
            flag=1;
            break;
        }
     }
    if(flag!=1){
        printf("\nPrime\n");
    }
}
int oddEven(num){
    if(num%2==0){
        printf("\nEven\n");
    }
    else{
        printf("\nOdd\n");
    }
}
