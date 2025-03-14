// Rearrange array in increasing-decreasing order

// Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

// Examples:

// Example 1:
// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7
// Explanation: First three elements are in the ascending order and next three elements are in the descending order.

#include<bits/stdc++.h>
using namespace std;
int soln(vector<int>&arr,int n){
   sort(arr.begin(),arr.end());
}
void printarray(vector<int>&arr,int n){
    // for(int i=0;i<n/2;i++){
    //     cout<<arr[i];
    // }
    // for(int j=n-1;j>=n/2;j--){
    //     cout<<arr[j];
    // }
    for(int i=0;i<n;i++){
            cout<<arr[i];
     }
}
bool comp(int a,int b){
    return a>b;
}
//wrong
// void soln2(vector<int>&arr,int n){
//     sort(arr.begin(),arr.begin()+(n+1)/2);
//     sort(arr.begin()+(n+1)/2,arr.end(),comp);
// }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    soln1(arr,n);
    printarray(arr,n);
}