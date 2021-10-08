#include<bits/stdc++.h>
using namespace std;
//selection sort
void _sort(int arr[],int n){

    for(int i=0;i<n;i++){
        int pick=i;
        int mn=i;
        for(int j=i+1;j<n;j++){
            if(arr[mn]>arr[j]){
                mn=j;
            }
        }
        if(mn!=pick)
            swap(arr[pick],arr[mn]);
    }


}

int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    _sort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

}
