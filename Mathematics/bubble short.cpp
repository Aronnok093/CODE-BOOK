#include <cstdio>
#include <cstring>
#include<iostream>

using namespace std;

int main(){
    int N,a[1000],temp;

    while(scanf("%d",&N)==1){
        for(int i = 0;i<N;++i) scanf("%d",&a[i]);

        int ans = 0;

        for(int i = 1;i<N;++i)
            for(int j = 0;j<i;++j)
                if(a[j]>a[i]){
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }

        for(int j = 0;j<N;++j)
            cout<<a[j]<<" ";
        cout<<endl;
    }

    return 0;
}
