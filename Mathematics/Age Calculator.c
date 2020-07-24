#include<stdio.h>
#define pf printf
#define sf scanf
int main(){

    int p_year,p_month,p_date, b_year,b_month,b_date,ca_date,ca_year,ca_month;
    int month[12]={31,28,31,30,31,30,31,30,31,30,31,30};
    char month_name[][14]={"January","February", "March", "April", "May",
    "June", "July", "August", "September", "October","November", "December"};

    pf("Enter Present Date:(dd/mm/yy) ");
    sf("%d/%d/%d",&p_date,&p_month,&p_year);
    pf("Enter Birth Date:(dd/mm/yy) ");
    sf("%d/%d/%d",&b_date,&b_month,&b_year);
    
    // if birth date is greater then current birth 
    // month then do not count this month and add 30  
    // to the date so as to subtract the date and 
    // get the remaining days 
    
    if(b_date > p_date){
        p_date=p_date+month[b_month-1];
        p_month=p_month-1;
    }
    
    // if birth month exceeds current month, then do 
    // not count this year and add 12 to the month so 
    // that we can subtract and find out the difference 
    
    if(b_month > p_month){
        p_year=p_year-1;
        p_month=p_month+12;
    }

    ca_date=p_date-b_date;
    ca_month=p_month-b_month;
    ca_year=p_year-b_year;

    printf("\tAge Calculation\n");
    printf("\t----------------\n");
    printf("\tYear\tMonth\tDay\n");
    printf("\t%d\t%d\t%d",ca_year,ca_month,ca_date);

    return 0;
}
/*Enter Present Date:(dd/mm/yy) 24/7/2020
Enter Birth Date:(dd/mm/yy) 8/5/1999
        Age Calculation
        ----------------
        Year    Month   Day
        21      2       16
        */
