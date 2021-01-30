#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    vector<int>arr[100];            /// vector of array
    int edge,x,y,node,i;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for( i=0;i<=node;i++){
        cout<<i<<"->";
        for(auto it : arr[i])                     ///print adj node
            cout<<it<<" ";
        cout<<endl;
    }


}

