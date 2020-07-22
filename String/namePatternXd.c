#include<stdio.h>
int main() {
   char str[50];
   char n_srt[50];
   int count=0,i=0,j=0,k;
   printf("Enter something: \n");
   scanf("%[^\t]s", &str);
   printf("Given String:\n%s", str);
   while(str[i]!='\0'){
        if(str[i]=='\n'){
            j=i;
        }
        i=i+1;
    }
    j=j-1;
    while(str[j]!=str[0]){
        j--;
    }
    while(str[j]!='\0'){
        n_srt[i]=str[j];
        j++;
        i++;
    }
    count=i;
    printf("\n");
    while(count!=0){
        count=count-1;
        for(j=0;j<count;j++){
            if('A'<=n_srt[j]&&n_srt[j]<='Z'||'a'<=n_srt[j]&&n_srt[j]<='z')
            printf("%c",n_srt[j]);
        }
        printf("\n");
    }


}
/*Enter something:
f
fa
far
fard
fardin

Given String:
f
fa
far
fard
fardin

fardin
fardi
fard
far
fa
f
*/


