#include<bits/stdc++.h>
using namespace std;

bool swapn( int a, int b){
    return a>b;             // descending order
}
int main(){

    vector<int>num;
    int x;
    for(int i=1;i<=5;i++){
        cin>>x;
        num.push_back(x);
    }
    sort(num.begin(),num.end(),swapn); // default sort ascending order
    for(int i=0;i<5;i++)
        cout<<num[i]<<" ";

}

