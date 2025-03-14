// Remove Duplicates in-place from Sorted Array
// Input:
//  arr[1,1,2,2,2,3,3]

// Output:
//  arr[1,2,3,_,_,_,_]

// Explanation:
//  Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

#include<bits/stdc++.h>
using namespace std;
int soln(vector<int>&arr,int n){
    int nexxtNull=1;
   for(int i=1;i<n;i++){
    if(arr[i]!=arr[nexxtNull-1]){
        arr[nexxtNull]=arr[i];
        nexxtNull++;
    }
   }
   return nexxtNull;
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
    int k=soln(arr,n);
    printarray(arr,k);
}