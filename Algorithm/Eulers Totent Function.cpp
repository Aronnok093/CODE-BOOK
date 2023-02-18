#include<bits/stdc++.h>
using namespace std;
#define mx 300000
#define ll long long int

bool marked[mx];
int phi[mx],nphi;

void phi_(int n){
   
	for(ll i =1;i<=n;i++){
		phi[i]=i;
	}
	phi[1]=1;
 	marked[1]=1;
 	
 	for(ll i=2;i<=n;i++){
 		if(!marked[i]){ // if prime
 			 
 			for(ll j=i;j<=n;j+=i){
 				marked[j]=1;
 				phi[j]=phi[j]/i*(i-1);
 			}
 		
 		} 
 		
 	}
 
}


int main(){
    phi_(100000);
    int t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	cout<<phi[n]<<endl;
    }

}
