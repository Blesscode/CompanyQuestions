//O(nlogn) O(1)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int UniqueSum(int n,int arr[]){
    sort(arr,arr+n); //nlogn
    int start=0;
    int count=0;
    int sum=0;
    int end=0;
    while(end<n){ //O(n)
        while(arr[start]==arr[end]){
            count++;
            end=end+1;
        }
        if(arr[start]!=arr[end]){
            if(count%2==0){
                sum=sum+arr[start];
                cout<<"number is: "<<arr[start]<<endl;
            }
            start=end;
            count=1;
        }
        end++;
    }
    return sum;
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
    cout<<"The sum is: "<<UniqueSum(n,arr)<<endl;
}