#include<bits/stdc++.h>
using namespace std;
set<int>st;

bool bfs(int src,vector<int>edg[]){
    vector<int>color(202,2);
    queue<int>q;
    q.push(src);
    color[src]=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        int len=edg[x].size();

        for(int i=0;i<len;i++){
                int y=edg[x][i];

            if(color[x]==color[y]){
                return true;
            }
            else if(color[y]==2){
                color[y]=1-color[x];
                q.push(y);
            }
        }
    }
    return false;
}


int main(){
    int node,edge,x,y;
    while(cin>>node){
        vector<int>edg[202];
        if(node==0)
            break;
        cin>>edge;
        for(int i=0;i<edge;i++){
            cin>>x>>y;
            edg[x].push_back(y);
            edg[y].push_back(x);
            st.insert(x);
            st.insert(y);
        }
        auto it=st.begin();
       bool ans=bfs(*it,edg);
       if(ans){
            cout<<"NOT BICOLORABLE."<<endl;
       }
       else{
            cout<<"BICOLORABLE."<<endl;

       }
       st.clear();
    }
    return 0;

}
