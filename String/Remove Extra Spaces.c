#include<stdio.h>
#define max 100
int main(){
    char arr[max];
    int i,count=0;
    gets(arr);
    for(i=0;arr[i]!='\0';i++){

        if(arr[i]==' '){

            count++;

        }
        else if(('A'<=arr[i]<='Z')||('a'<=arr[i]<='z')){
                if(count>=1){
                    printf(" ");
                    count=0;
                }
            printf("%c",arr[i]);
        }

    }


}
