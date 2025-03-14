// mean ,median,mode
// mode= highest occurace element
// mean= avg
// median= odd= (n+1)/2
//         even= {(n/2) + [(n/2)+1]}/2
#include<bits/stdc++.h>
using namespace std;
int soln(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
   if(n%2!=0){
    //odd
    return(arr[(n)/2]);
   }else{
    //even
    int l1=arr[(n/2)];
    int l2=arr[(n/2)-1];
    return((l1+l2)/2);
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