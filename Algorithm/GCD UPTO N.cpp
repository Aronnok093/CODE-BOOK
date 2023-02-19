#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){

    if(b==0) return a;
   
    return gcd(b,a%b);
    
     
}

int main(){
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    //#endif

    int t;
    cin>>t;
    while(t--){
        int tt;
        vector<int>arr;
        cin>>tt;
        for(int i=0;i<tt;i++){
            int tmp;
            cin>>tmp;
            arr.push_back(tmp);
        }
        int g=gcd(max(arr[0],arr[1]),min(arr[0],arr[1]));
        int ln=arr.size();
        for(int i=2;i<ln;i++){
            g=gcd(max(g,arr[i]),min(g,arr[i]));
        }
        cout<<g<<endl;
    }

    return 0;
}
