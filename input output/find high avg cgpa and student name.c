#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char hname[50];
    float sum,hsum=0.0,mark;
    do{
    int n;
    sum=0.0;
    printf("\nEnter Name: ");
    scanf("%s",&name);
    printf("\nCGPA first semester : ");
    scanf("%f",&mark);
    sum=sum+mark;
    printf("\nCGPA 2nd semester : ");
    scanf("%f",&mark);
    sum=sum+mark;
    printf("\n1 for continue");
    scanf("%d",&n);
    if(sum>hsum){
        hsum=sum;
        strcpy(hname,name);

    }
    if(n!=1){
        break;
    }

    }while(1);
    printf("%s %f",hname,hsum/2);


}
