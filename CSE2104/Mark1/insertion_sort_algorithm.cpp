#include<bits/stdc++.h>
using namespace std;
void _sort(int arr[], int n){

    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
            else
                break;
        }
    }

}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    _sort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

}
