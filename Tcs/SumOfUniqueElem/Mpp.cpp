//O(n) O(n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int UniqueSum(int n,int arr[]){
	//make map
    unordered_map<int,int>mpp;
	int sum=0;
	for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<"First: "<<it.first<<"->"<<"Second: "<<+it.second<<endl;
    }
	//print the map
	for(auto &ab: mpp){
		sum+=ab.first;
	}
	return sum;
}
int main(){
    cout<<"Enter no of times you want "<<endl;
    int t;
    cin>>t;

    while(t--){
     //no of element
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
}

