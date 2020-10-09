#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct info{char name[100],city[100];
                   int age;
                   };
int main()
{
    struct info p[5];
    int i;
    for(i=0;i<5;i++)
    {
        gets(p[i].name);
          fflush(stdin);
        scanf("%d",&p[i].age);
         fflush(stdin);
        gets(p[i].city);
        fflush(stdin);
    }
      for(i=0;i<5;i++)
    {   if(!(strcmp(p[i].city,"Dhaka")))
        {puts(p[i].name);
                printf("%d\n",p[i].age);
        puts(p[i].city);
        } ;
    }
}
