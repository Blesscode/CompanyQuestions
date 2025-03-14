#include<bits/stdc++.h>
using namespace std;
void soln(vector<int>&arr,int n){
   
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
    printarray(arr,n);
}