#include<bits/stdc++.h>
using namespace std;
#define mx 100000
#define ll long long int

bool marked[mx];
int prime[mx],nprime;

void seive(int n){
    int limit=sqrt(n+1);
    for(ll i=4;i<=n;i+=2){
        marked[i]=true;
    }

    prime[nprime++]=2;

    for(ll i=3;i<=n;i+=2){

        if(!marked[i]){
            prime[nprime++]=i;

            if(i<limit){

                for(ll j=i*i;j<=n;j+=i*2){
                    marked[j]=true;
                }
            }
        }
    }


}

int main(){
    seive(1000);
    cout<<nprime<<endl;
    for(int i=0;i<nprime;i++){
        cout<<prime[i]<<endl;
    }
    return 0;
}
