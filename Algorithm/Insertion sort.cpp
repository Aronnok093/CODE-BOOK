#include<bits/stdc++.h>
using namespace std;
//INSERTION-SORT
int main(){
    int arr[]={3 ,2 ,5, 1, 7},count=0;
    for(int i =1;i<=4;i++){
        int key=arr[i];
        int j=i-1;
        while(j>-1&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            count++;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";


}
