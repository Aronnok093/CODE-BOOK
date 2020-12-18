#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int>mystack;                 //last in fast out
        int x;
    for(int i=0;i<=5;i++){
        cin>>x;
        mystack.push(x);
    }
    cout<<"Size"<<endl;
    cout<<mystack.size()<<endl;
    cout<<"Output"<<endl;
    while(!mystack.empty()){          //if stack empty, empty() return 1;
        cout<<mystack.top()<<endl;
        mystack.pop();
    }
}
