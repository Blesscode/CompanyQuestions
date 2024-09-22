#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MaxCandy(int n){
  //count no of ones
//   int count=0;
//   while(n>0){
//     n=n&(n-1);
//     count=count+1;
//   }
    cout<<(n&1);
  return ;
}

int main(){
    int n;
    cin>>n;   //15
    MaxCandy(n);
}