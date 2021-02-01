#include<bits/stdc++.h>
using namespace std;

int main(){
    FILE *fs=fopen("date.txt","w");
    int a,b;
    for(int i=0;i<5;i++){
        cin>>a>>b;
        fprintf(fs,"%d %d\n",a,b);
    }
    fclose(fs);
    return 0;
}
