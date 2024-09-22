#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int,int> maxSubarraySum(int arr[],int n){
    int maxi=0;
    int sum=0;
    int start=0;
   
    int start_new=0;
    int end_new=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        //cout<<"sum: "<<i<<" "<<sum<<endl; 
        if(sum<0){
            
            start=i;
            sum=0;
            
        }
        else{
            if(maxi<sum){
                maxi=max(sum,maxi);
                start_new=start+1;
                end_new=i;
            }
        
        
        }
    }
    return {start_new,end_new};
}

int main(){
        int n;
        cout<<"Enter the number of elem"<<endl;
        cin>>n;
        //declare array
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        auto a=maxSubarraySum(arr,n);
        cout<<"The sstart index is: "<<a.first<<"The end index is: "<<a.second<<endl;
}