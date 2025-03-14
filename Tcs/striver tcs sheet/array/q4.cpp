// Rotate array by K elements : Block Swap Algorithm
// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5} K=2
// Output: {3,4,5,1,2}
// Explanation: Rotate the array to right by 2 elements.

#include<bits/stdc++.h>
using namespace std;
void soln(vector<int>&arr,int n,int d){
   int k=k%n;
   reverse(arr.begin(),arr.begin()+k);
   reverse(arr.begin()+k,arr.end());
   revarse(arr.begin(),arr.end());
}
void printarray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    soln(arr,n);
    printarray(arr,n);
}