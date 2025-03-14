#include<bits/stdc++.h>
#include<string>
using namespace std;
string::size_type sz;
int soln(vector<int>&arr,int n){
    int count=0;
    if(n!=0){ count=1;}else{return 0;}
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<soln(arr,n);

    
}