#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int a,int b,vector<int>&arr){
    
            int temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
    
    return ;
}
void soln(vector<int>&arr,int n){
    //1. point to 1st non zero pos -> point
    int nonzero=0;

    for(int i=0;i<n;i++){

        //2. find the value for next non zero pos -> find
        if(arr[i]!=0){
             //3. place the value of the non zero possition ->place
            swap(nonzero,i,arr);
            //4. point to next non zero pos ->point
            nonzero++;
        }
       
    }
    return ;
}

int main(){
// 1. array creation
    int n;
    cout<<"enter size: \n";
    cin>>n;
    vector<int>arr(n);
    cout<<"start entring array values: \n";
    for(int i=0;i<n;i++){
        cout<<"enter values:"<<i<<" "<<"\n";
        cin>>arr[i];
    }
    soln(arr,n);
    cout<<"the ans is \n";
    for(int j=0;j<n;j++){
        cout<<arr[j]<< " ";
    }
}