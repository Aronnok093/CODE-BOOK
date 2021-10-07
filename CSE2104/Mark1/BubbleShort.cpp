#include<bits/stdc++.h>
using namespace std;

void bubble_short(int arr[],int siz){

    for(int rotation =0;rotation<siz-1;rotation++){
        for(int iterate=0;iterate<siz-rotation;iterate++){
            if(arr[iterate]>arr[iterate+1]) // check inversion pair
                swap(arr[iterate],arr[iterate+1]); // swap inversion pair
        }
    }

}



int main(){
    int arr[]={3,2,1,4,5,6,9,7};
    bubble_short(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

}
