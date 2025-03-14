// Maximum Product Subarray in an Array
// Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.
// Examples
// Example 1:
// Input:

//  Nums = [1,2,3,4,5,0]
// Output:

//  120
#include<bits/stdc++.h>
using namespace std;
int soln(vector<int>&arr,int n){
    int temp=1;
    int pospro=1;
    int negpro=1;
    int maxi=0;
   for(int i=0;i,n;i++){
    temp=max(arr[i],arr[i]*pospro,arr[i]*negpro);
    negpro=min(arr[i],arr[i]*pospro,arr[i]*negpro);
    pospro=temp;
    result=max(result,pospro);

    return result;
   }
}
void printarray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<soln(arr,n);
    //printarray(arr,n);
}