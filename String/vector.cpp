#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>arr;
    vector<int>::iterator it,it1,er;
    int x;
    for(int i=0;i<=5;i++){
        cin>>x;
        arr.push_back(x);
    }
    it=arr.begin();
    it1=arr.end();
    it1--;
    it1--;
    cout<<"Output"<<endl;
    for(auto it: arr)
        cout<<it<<" "<<endl;
    cout<<"New Output"<<endl;arr.erase(it,it1);
    for(auto it: arr)
        cout<<it<<" "<<endl;

    return 0;

}
