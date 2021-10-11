#include <bits/stdc++.h>
using namespace std;

int _partition(int arr[],int lw, int hi){

    int left=lw-1;
    int right=hi;
    int pivot=arr[hi]; //mark

    while(left<right){
        do{
           left++;
        }while(arr[left]<pivot);
        do{
            right--;
        }while(arr[right]>pivot && right>0);

        if(left<right)
            swap(arr[left],arr[right]);
    }
    swap(arr[left],arr[hi]);

    return left; //mark

}

void quick_sort(int arr[],int lw, int hi){

    if(lw<hi){
        int tmp=_partition(arr, lw, hi);
        quick_sort(arr,lw, tmp-1);
        quick_sort(arr,tmp+1,hi); //mark
    }

}
int main(){

    int arr[]={9,8,3,6,4,4,3,2,1};
    quick_sort(arr,0,8);

    for(int i=0;i<9;i++)
        cout<<arr[i]<<" ";

}

