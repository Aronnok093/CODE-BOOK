#include<stdio.h>
#include<stdbool.h>
bool primeOrNotprime(int a){
    for(int i=2;i<a;i++)
        if(a%i==0)
            return false;
    return true;


}
int fact(int a){
    int ans=1;
    for(int i=1;i<=a;i++)
        ans*=i;
    return ans;
}
int main(){
    int tt,ans=1;
    printf("Enter Any term: ");
    scanf("%d",&tt);
    for(int i=1;i<=tt;i++){
        if(primeOrNotprime(i))
            ans*=fact(i);
    }
    printf("ANS: %d",ans);
    return 0;
}
