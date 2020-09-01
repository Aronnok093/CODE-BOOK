#include<stdio.h>
char factor(char arr[]){
    int i;
    for(i=0;arr[i]!='\0';i++){
        if(i==0&&'a'<=arr[i]&&arr[i]<='z'){
            arr[i]=arr[i]-32;

        }
        else if('a'<=arr[i+1]&&arr[i+1]<='z'&&arr[i]==' '){
            arr[i+1]=arr[i+1]-32;
        }
        else if('A'<=arr[i]&&arr[i]<'Z'&&arr[i-1]!=' ')
            arr[i]=arr[i]+32;

    }
    printf("%s",arr);

}
int main(){

    char arr[100];
    gets(arr);
    factor(arr);
}
