#include<bits/stdc++.h>
#include<string>
using namespace std;
string::size_type sz;
void soln(vector<int>&arr,int n){
    int low=0; //1st
    int high=n-1; //last
    int mid=0; //1st

    while(mid<=high){
        //if mid=0
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    return;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    soln(arr,n);

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}