#include<bits/stdc++.h>
using namespace std;

int main(){
    FILE *fs=fopen("date.txt","r");
    int a,b;
    while(!feof(fs)){
        fscanf(fs,"%d %d\n",&a,&b);
        cout<<a<<" "<<b<<endl;
    }
    fclose(fs);
    return 0;
}
