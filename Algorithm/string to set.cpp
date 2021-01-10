#include<bits/stdc++.h>
using namespace std;
string findWord(string s){
    set<string>st;
    string word;
    istringstream ss(s);
    while(ss >> word){
        st.insert(word);
    }
    cout<<"All uncommon word"<<endl;
    for(auto it : st)
        cout<<it<<endl;

}
int main(){
    string s;
    getline (cin,s);
    findWord(s);
}
