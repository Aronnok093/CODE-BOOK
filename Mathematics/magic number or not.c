#include<stdio.h>
int digitSum(int num);
int reverse(int d_sum);
int main(){
    int num,d_sum,r_num;
    scanf("%d",&num);
    d_sum=digitSum(num);
    r_num=reverse(d_sum);
    printf("%d*%d->%d",d_sum,r_num,d_sum*r_num);
    if(d_sum*r_num==num){
        printf("\nIts A magic Number\n");

    }
    else{
        printf("\nIts Not A magic Number\n");
    }

}
int digitSum(int num){
    int sum=0;
    while(num!=0){
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}
int reverse(int d_sum){
    int r_num=0;
    while(d_sum!=0){
        r_num=(r_num*10)+(d_sum%10);
        d_sum=d_sum/10;
    }
    return r_num;
}

