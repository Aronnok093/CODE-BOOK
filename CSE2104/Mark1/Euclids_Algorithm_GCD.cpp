#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

//let m>n
/* The Euclidean algorithm is based on the principle that the greatest common
divisor of two numbers does not change if the larger number
is replaced by its difference with the smaller number.
For example, 21 is the GCD of 252 and 105 (as 252 = 21 × 12 and 105 = 21 × 5),
and the same number 21 is also the GCD of 105 and 252 − 105 = 147.
*/
ll _gcd(ll m,ll n){
    while(n>0){
        ll rem=m%n;
        m=n;
        n=rem;
    }

    return m;
}

int main(){
    ll m=35,n=15;
    cout<<"GCD = "<< _gcd(m,n);
}
