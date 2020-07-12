#include<stdio.h>
int main(){
    int r_year=1900,i_year,total_days,day_code,i,j,k,count=0;

    char days[7][14]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

    int month[]={31,28,31,30,31,30,31,30,31,30,31,30};

    char month_n[12][14]={
    "\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
    };
    printf("Enter a year:\n");

    scanf("%d",&i_year);

    total_days=(i_year-r_year)*365;

    for(i=1900;i<=i_year;i++){
        if(i%4==0&&i%100!=0||i%400==0&&i%100==0){
            if(i!=i_year){
                total_days++;
                }
            else
                month[1]++;
        }
    }
    day_code=total_days%7;

    for(j=0;j<12;j++){
        printf("%s :\n",month_n[j]);

        for(i=day_code;i<=7;i++){
            if(i!=7){
                printf("\t%s",days[i]);
        }
            if(i==7){
                for(k=0;k<day_code;k++){
                    printf("\t%s",days[k]);
            }

            }
        }
        printf("\n");
        for(i=1;i<=month[j];i++){
                printf("\t%d",i);

            if(i%7==0){
                printf("\n");
            }

        }

        total_days=total_days+month[j];
        day_code=(total_days%7);
        }


}
