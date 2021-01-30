#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    vector<pair<int,int> >arr[100];            /// vector of array
    int edge,x,y,node,i,c;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>x>>y>>c;
        arr[x].push_back(make_pair(y,c));
        arr[y].push_back(make_pair(x,c));
    }
    for( i=0;i<=node;i++){
        for( int j=0;j<arr[i].size();j++){
            cout<<i<<"->";
            cout<<arr[i][j].first<<" "<<arr[i][j].second<<endl;            ///print adj of node with weight. arr[i][j].second= weight and arr[i][j].first=node
        }
    }


}

