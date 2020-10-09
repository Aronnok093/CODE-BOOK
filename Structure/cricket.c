#include<stdio.h>
#include<string.h>
#define max 100
struct info{

    char team[max];
    char name[max];
    float avg;
};
int main(){

    struct info cricket[50];

    int i=0;
    int j=0;
    while(i++<3){
        printf("\nTeam Name: ");
        fgets(cricket[i].team,30,stdin);
        printf("\nPlayer Name: ");
        fgets(cricket[i].name,30,stdin);
        printf("\nPlayer Avarage: ");
        scanf("%f",&cricket[i].avg);
        fflush(stdin);
    }
    system("cls");
    int count=0;
    int team_count=1;
    for(i=1;i<=3;i++){
        if(0==strcmp(cricket[i].team,cricket[i-1].team))
            continue;
        if(count==3)
            break;
        printf("\n\n------------------------------");
        printf("\nTeam No:%d",team_count);
        printf("\nTeam Name: %s\nPlayer Name: %s\nAvarage: %.2f\n\n",cricket[i].team,cricket[i].name,cricket[i].avg);
        count++;
        for(j=i+1;j<=3;j++){

          if(0==strcmp(cricket[i].team,cricket[j].team)){
            printf("\nTeam Name: %s\nPlayer Name: %s\nAvarage: %.2f\n\n",cricket[j].team,cricket[j].name,cricket[j].avg);
            count++;
          }
        }
        printf("\n\n------------------------------");
        team_count++;

    }
}
