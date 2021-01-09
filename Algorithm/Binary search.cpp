#include<bits/stdc++.h>
using namespace std;
vector<int>arr={1,2,3,3,3,3,4,5,6,7,8,9};  // In binary search we must need to short
void binary(int num){
    int low=0,high=arr.size(),mid,index=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==num){
            index=mid;
            //high=mid-1; for lower bound
            //low=mid+1; for upper bound
            break;
        }
        else if(arr[mid]>num){
            high=mid-1;
        }
        else if(arr[mid]<num){
            low=mid+1;
        }
    }
    if(index!=-1)
        cout<<"Number Found at index "<<index<<endl;
    else
        cout<<"Number Not found"<<endl;

}
int main(){
    vector<int>:: iterator iit; // creating an iterator
    binary(6);
    auto it=binary_search(arr.begin(),arr.end(),8); // return type boolean
    auto it1=lower_bound(arr.begin(),arr.end(),3); // return type iterator
    auto it2=upper_bound(arr.begin(),arr.end(),3); // return type iterator
    if(it){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    int index=distance(arr.begin(),it1);
    int index1=distance(arr.begin(),it2);
    cout<<"Lower Bound index "<<index<<endl;
    cout<<"Upper Bound index "<<index1<<endl;
    for(int i=index;;i++)
        if(arr[i]!=3)
            break;
        else
            cout<<arr[i]<<" ";
        cout<<endl;
    for(it1;;it1++){
        if(*it1!=3)
            break;
        cout<<*it1<<endl;
    }

    return 0;
}
