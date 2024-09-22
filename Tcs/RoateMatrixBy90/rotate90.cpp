#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void Rotate90(vector<vector<int>>&arr,int m,int n){
    //column wise reverse
    
   reverse(begin(),end())
   reverse(begin(),end())
   reverse(begin(),end())
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){
    int m,n;
    cout<<"enter the values"<<endl;
    cin>>m>>n;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cout<<"i :"<<i<<endl;
            cin>>arr[i][j];
        }
    }
    Rotate90(arr,m,n);
     for(int k=0;k<n;k++){
        for(int l=0;l<m;l++){
            cout<<arr[k][l];
        }
        cout<<endl;
    }
    
}