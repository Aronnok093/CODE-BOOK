// C program to find sum of series
// 1 + x^2/3! + x^3/4! + ....+ x^n/2n-1
#include <math.h>
#include <stdio.h>

// C code to print the sum
// of the series
double sum(int x, int n)
{
    double total = 0.0, multi = x;
    int y,i,fact,j;
    for (i = 1; i <= n; i++) {
        fact=1;
        for(j=1;j<=(2*i-1);j++){
            fact=fact*j;
            }

        if(i%2==0){
            total=total-(pow(x,i)/(float)fact);

        }
        else{
            total=total+(pow(x,i)/(float)fact);

        }
    }
    return total;
}
// Driver code
int main()
{
    int x,n;
    printf("Enter The Value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%.2f", sum(x, n));
    return 0;
}

