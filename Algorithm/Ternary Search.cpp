#include<bits/stdc++.h>
using namespace std;

int ts(int left,int right,int key, int arr[]){
    if(left<=right){
        int midFirst,midSecound;
        midFirst=left+(right-left)/3;
        midSecound=right-(right-left)/3;
        if(arr[midFirst]==key)
            return midFirst;
        if(arr[midSecound]==key)
            return midSecound;
        if(key<arr[midFirst]){
            return ts(left,midFirst-1,key,arr);
        }
        else if(key>arr[midSecound]){
                return ts(midSecound+1,right,key,arr);
        }
        else{
             return ts(midFirst+1,midSecound-1,key,arr);
        }


    }
    return -1;

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(arr[0])-1;
    int ans=ts(0,len,5,arr);
    cout<<"5 have Index: "<<ans<<endl;

    return 0;
}
