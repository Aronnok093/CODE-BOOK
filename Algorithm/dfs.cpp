#include<bits/stdc++.h>
using namespace std;

vector<int>edg[100];
vector<bool>isVisited(100+2,false);

void dfs(int src){

    if(!isVisited[src]){
        isVisited[src]=true;
        cout<<src<<" ";
        for(int i=0;i<edg[src].size();i++){
            dfs(edg[src][i]);
        }
    }

}

int main(){
    int x,y,edge,node,tmp,src;
    cin>>node>>edge>>src;

    for(int i=0;i<edge;i++){
        cin>>x>>y;
        edg[x].push_back(y);
    }
    dfs(src);
return 0;
}
