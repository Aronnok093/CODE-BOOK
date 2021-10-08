#include<bits/stdc++.h>
using namespace std;

bool _search(int arr[],int x,int n){

    int lw=0;
    int up=n-1;
    while(lw<=up){
        int mid=lw+(up-lw)/2;
        if(arr[mid]==x)
            return true;
        else if(arr[mid]<x)
            lw=mid+1;
        else if(arr[mid]>x){
            up=mid-1;
        }
    }

    return false;
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<_search(arr,5,9);

}
