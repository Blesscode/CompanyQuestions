// Adding Element in an Array

// Problem Statement: Given an array of N integers, write a program to add an array element at the beginning, end, and at a specific position.
// Input: N = 5, array[] = {1,2,3,4,5}
// insertbeginning(6)
// insertending(7)
// insertatpos(8,4)
// Output: 6,1,2,8,3,4,5,7
// Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4 
#include<bits/stdc++.h>
using namespace std;
void insertBegin(vector<int>&arr,int k){
    //insert(position,count,value)
    arr.push_back(0);//inc size of vector
    for(int i=arr.size()-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=k;
}
void insertend (vector<int>&arr,int l){
    arr.push_back(l);
}
void insertpos(vector<int>&arr,int m,int pos){
    //arr.insert(arr.begin()+pos,m);
    arr.push_back(0); //inc array size
    for(int i=arr.size()-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=m;
}
void soln(vector<int>&arr,int n,int k,int l,int m,int pos){
   insertBegin(arr,k);
   insertend(arr,l);
   insertpos(arr,m,pos);
}
void printarray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,k,l,m,pos;
    cin>>n>>k>>l>>m>>pos;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    soln(arr,n,k,l,m,pos);
    printarray(arr,arr.size());
}