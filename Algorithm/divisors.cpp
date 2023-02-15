#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 30000
vector<ll>divisors[mx];

void divisor(ll n){

    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            divisors[j].push_back(i);
        }
    }
}

int main(){

   divisor(1000);

   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int len=divisors[a].size();
        for(auto it:divisors[a]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;

}
