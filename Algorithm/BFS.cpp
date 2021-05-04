#include<bits/stdc++.h>
using namespace std;
vector<int>edg[100];
vector<bool>visited(100+2,false);
int parents[100];
int level[100];
set<int>st;

void bfs(int src){
    queue<int>q;
    q.push(src);
    level[src]=0;
    visited[src]=true;
    parents[src]=src;
    while(!q.empty()){
        int y = q.front();
        q.pop();
        int len = edg[y].size();
        for(int i=0;i<len;i++){
            int x = edg[y][i];
                if(!visited[x]){
                    visited[x]=true;
                    parents[x]=y;
                    q.push(x);
                    level[x]=level[y]+1;
                    cout<<x<<" "<<level[y]+1<<endl;
                }
        }

    }


}
int main(){
    int x,y,node,edge;
    cin>>node>>edge;

    for(int i=0;i<edge;i++){
        cin>>x>>y;
        edg[x].push_back(y);
        edg[y].push_back(x);
        st.insert(x);
        st.insert(y);
    }
    int src;
    cout<<"Enter source: "<<endl;
    cin>>src;
    bfs(src);
    for(auto it: st){
        cout<<it<<" Level: "<<level[it]<<" "<<"parents: "<<parents[it]<<endl;
    }

  return 0;
}
