#include<stdio.h>
#include<string.h>
int main(){
    char num1[100],num2[100];
    int len1,len2,a[100],b[100],i=0,sum[101],carry=0,rs=0;
    scanf("%s",&num1);
    scanf("%s",&num2);
    len1=strlen(num1);
    len2=strlen(num2);
    while(num1[i]!='\0'){
        a[i]=num1[i]-48;
        i++;
    }
    i=0;
    while(num2[i]!='\0'){
        b[i]=num2[i]-48;
        i++;
    }

    if(len1>len2){

        len1=len1-1;
        len2=len2-1;
        for(i=len2;i>=0;i--){
            if(a[len1]<b[i]){
                sum[rs]=((a[len1]+10)-(b[i]+carry))%10;
                carry=1;
                len1--;
                rs++;
            }
            else{
            sum[rs]=(a[len1]-(b[i]+carry))%10;
            carry=(a[len1]-(b[i]+carry))/10;
            len1--;
            rs++;
            }
        }
        while(len1>=0){
            if(a[len1]<carry){
                sum[rs]=((a[len1]+10)-carry)%10;
                carry=1;
                len1--;
                rs++;
            }
        else{
            sum[rs]=(a[len1]-carry)%10;
            carry=(a[len1]-carry)/10;
            len1--;
            rs++;
        }
        }
        rs=rs-1;

        if(carry!=0){
            sum[rs]=carry;
        }

    }
    if(len2>len1){

        len1=len1-1;
        len2=len2-1;
        for(i=len1;i>=0;i--){
            if(b[len2]<a[i]){
                sum[rs]=((b[len2]+10)-(a[i]+carry))%10;
                carry=1;
                len2--;
                rs++;
            }
            else{
            sum[rs]=(b[len2]-(a[i]+carry))%10;
            carry=(b[len2]-(a[i]+carry))/10;
            len2--;
            rs++;
            }
        }
        while(len2>=0){
            if(b[len2]<carry){
                sum[rs]=((b[len2]+10)-carry)%10;
                carry=1;
                len2--;
                rs++;
            }
        else{
            sum[rs]=(b[len2]-carry)%10;
            carry=(b[len2]-carry)/10;
            len2--;
            rs++;
        }
        }
        rs=rs-1;

        if(carry!=0){
            sum[rs]=carry;
        }

    }

    if(len1==len2){
        len1=len1-1;
        len2=len2-1;
   
        for(i=len2;i>=0;i--){
            if(a[len1]<b[i]){
                sum[rs]=((a[len1]+10)-(b[i]+carry))%10;
                carry=1;
                len1--;
                rs++;
            }
            else{
            sum[rs]=(a[len1]-(b[i]+carry))%10;
            carry=(a[len1]-(b[i]+carry))/10;
            len1--;
            rs++;
            }
        }


    }
    for(i=rs;i>=0;i--){
        printf("%d",sum[i]);
    }

}
