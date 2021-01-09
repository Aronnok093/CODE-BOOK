#include <bits/stdc++.h>
using namespace std;
 set<string>st;
void removeDupWord(string str)
{
    istringstream ss(str);

    string word;


    while (ss >> word)
    {
        st.insert(word);
    }
    for(auto it: st)
        cout<<it<<endl;
}

int main()
{
    string str = "Geeks for Geeks";
    removeDupWord(str);
    return 0;
}
