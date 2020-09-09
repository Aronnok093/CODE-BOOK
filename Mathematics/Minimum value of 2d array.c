#include<stdio.h>
int main()
{
    int arr[3][3]={4,2,3,4,5,6,7,8,9};
    int swap,i,j;
for (i = 0; i < 3; i++)
{
    for (j = 0; j <3; j++)
    {
        if(*(*(arr+i)+j) > *(*(arr+i)+j+1))
        {
            swap = *(*(arr+i)+j);
            *(*(arr+i)+j) = *(*(arr+i)+j+1);
            *(*(arr+i)+j+1) = swap;
        }
    }
}


printf("\nlowest Value: %d\n",*(*(arr+0)+0));

}
