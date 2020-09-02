#include<stdio.h>

int stringCompare(char[], char[]);  // function prototype declaration

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    char aj1[100], aj2[100];
    int compare;

    printf("\n\nEnter 1st string: ");
    scanf("%s", aj1);

    printf("\n\nEnter 2nd string: ");
    scanf("%s", aj2);

    compare = stringCompare(aj1, aj2);  // function call
    
    if(compare == 1)
        printf("\n\nBoth the strings are exactly same.\n\n");
     else
        printf("\n\nBoth the strings are different.\n");

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

int stringCompare(char mj1[], char mj2[])  // function definition
{
    int i = 0, flag = 0;
    while(mj1[i] != '\0' && mj2[i] != '\0') // until atleast one string ends
    {
        /*
            Even if they differ by a single character, 
            don't iterate further
        */
        if(mj1[i] != mj2[i]) 
        {
            flag = 1;
            break;
        }
        i++;
    }

    /*
        If all the characters are sequentially same as well as 
        both strings have ended
    */
    if(flag == 0 && mj1[i] == '\0' && mj2[i] == '\0')
        return 1;
    else
        return 0;
}
