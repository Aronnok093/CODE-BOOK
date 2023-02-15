#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 30000
int prime[mx];
int marked[mx];
int nPrime;
void seive(ll n){
    ll limit = sqrt(n+1);

    for(ll i=4;i<=n;i+=2){
        marked[i]=true;
    }

    prime[nPrime++]=2;

    for(ll i=3;i<=n;i+=2){
        if(!marked[i]){
            prime[nPrime++]=i;

            if(i<=limit){
                for(ll j=i*i;j<=n;j+=i*2){
                    marked[j]=true;
                }
            }
        }
    }

}

int main(){
    seive(1000);
    int t;
    cin>>t;
    while(t--){
        int a,i=0;
        cin>>a;
        while(true){
            if(a%prime[i]==0){
                cout<<prime[i]<<" ";
                a/=prime[i];
                if(a==1) break; //10=5 x 2 x 1;
            }
            else{
                i++;
            }
        }
        cout<<endl;
    }

}
