#include<stdio.h>
void main()
{
    int A[4][4],I,J;
    clrscr();
    printf("ENTER MATRIX A VALUES\n");
    for(I=0;I<4;I++)
    {
        for(J=0;J<4;J++)
        {
            scanf("%d",&A[I][J]);
        }
    }
    printf("LOWER MATRIX C VALUES ARE :\n");
    for(I=0;I<4;I++)
    {
        printf("\n");
        for(J=0;J<=I;J++)
        {
            printf("%d\t",A[I][J]);
        }
        printf("\n");
    }
    printf("UPPER MATRIX C VALUES ARE :\n");
    for(I=0;I<4;I++)
    {
        printf("\n");
        for(J=0;J<4;J++)
        {
             if(J>=I)
            printf("%d\t",A[I][J]);
             else
            printf("\t");
        }
        printf("\n");
    }
    printf("\n");
    getch();
}
