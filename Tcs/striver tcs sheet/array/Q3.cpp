#include<bits/stdc++.h>
using namespace std;
void soln(vector<int>&arr,int n, unordered_map<int,int>&mpp){
   for(int i=0;i<n;i++){
    mpp[arr[i]]++;
   }
}
void printarray( unordered_map<int,int>mpp){
    for(auto x:mpp){
        cout<<x.second;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    soln(arr,n,mpp);
    printarray(mpp);
}