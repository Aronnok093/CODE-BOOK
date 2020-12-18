#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
        for(int j=1;j<=len-i;j++)
            cout<<s.substr(i,j)<<endl;

}
