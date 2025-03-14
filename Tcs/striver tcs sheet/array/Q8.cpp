// Find all repeating elements in an array

// Problem Statement: Find all the repeating elements present in an array.

// Examples:

// Example 1:
// Input: 
// Arr[] = [1,1,2,3,4,4,5,2]
// Output:
//  1,2,4
// Explanation:
//  1,2 and 4 are the elements which are occurring more than once.

#include<bits/stdc++.h>
using namespace std;
void soln(vector<int>&arr,int n){
    // without hashmap
    sort(arr.begin(),arr.end());
    //int count=0;
    int value=INT_MIN;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]&& value!=arr[i]){
            cout<<arr[i]<< " ";
            value=arr[i];
        }
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
    soln(arr,n);
    //printarray(arr,n);
}