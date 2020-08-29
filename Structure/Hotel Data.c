#include<stdio.h>
#include<string.h>
#define max 100
struct hotel{
    char name[max];
    char adress[max];
    int room,charge;

};
int main(){
    struct hotel x[50];
    int temp,count;
    int i=0;
    while(1){
        count++;
        printf("\nEnter Hotel Name: \n");
        gets(x[i].name);
        printf("\nEnter Hotel Adress: \n");
        gets(x[i].adress);
        printf("\nNumber Of Room:\n");
        scanf("%d",&x[i].room);
        printf("\nRoom Charge:\n");
        scanf("%d",&x[i].charge);
        printf("\npress 1 to continue\nPress 0 to exit:\n");
        scanf("%d",&temp);
        fflush(stdin);
        if(temp==0)
           break;
        i++;
        system("cls");
    }
    int charge;
    system("cls");
    printf("\nWant To Find Hotel?!\n");
    printf("\nEnter Your Desire Room Charge:\n");
    printf("\nPress 0 to exit:\n");
    scanf("%d",&charge);
    if(charge==0)
        exit(0);
    else{
        for(i=0;i<count;i++){
            if(charge>=x[i].charge){
                printf("\n--------------\n");
                printf("Hotel Name:%s ",x[i].name);
                printf("\nHotel Adress: ");
                puts(x[i].adress);
                printf("\nNumber Of Room: %d",x[i].room);
                printf("\nCharge Rate: %d",x[i].charge);
                printf("\n\n");
            }
        }
        exit(1);
    }


}
