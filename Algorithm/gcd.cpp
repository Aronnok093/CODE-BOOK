#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){

    if(!b==0){
        gcd(a,a%b);
    }
    return b;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=gcd(max(a,b),min(a,b));
        cout<<ans<<endl;
    }

    return 0;
}
