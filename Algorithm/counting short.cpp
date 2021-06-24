#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,6,4,3,6,8,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
  }
  int cnt[max+2]={0};
    for(int i=0;i<n;i++){
       cnt[arr[i]]++;
    }

    for(int i=0;i<=max;i++){
        int x=cnt[i];
        for(int j=0;j<x;j++){
            if(x!=0)
                cout<<i<<" ";
        }
    }
}
