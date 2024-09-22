#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
6 20
40 5 5 105 30 20
*/
int MaxCandy(vector<int>arr,int n,int m){
    int count=0; 
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
       if(arr[i]%5==0){
            count++;
        }
        if(arr[i]<m){
            if(arr[i]%5!=0){
                m=m-arr[i];
                count++;
            }    
        }
        
    }
    return count;
}

int main(){
    int m,n;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxCandy(arr,n,m);
}