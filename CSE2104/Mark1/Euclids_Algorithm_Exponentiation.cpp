#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll pow(ll m,ll n){

    if(n==0)
        return 1;
    else if(n==1)
        return m;
    else if(n%2==0)
        return pow(m*m,n/2);
    else
        return pow(m*m,n/2)*m;

}

int main(){
    ll m=2,n=4;
    cout<<pow(2,4);
}
