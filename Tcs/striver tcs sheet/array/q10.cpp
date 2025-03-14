// Find all Symmetric Pairs in the array of pairs

// In this article, we will solve the problem: "Find all Symmetric Pairs in the array of pairs"

// Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.

// Examples:

// Example 1:
// Input: (1,2),(2,1),(3,4),(4,5),(5,4)
// Output: (2,1) (5,4)
// Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

#include<bits/stdc++.h>
using namespace std;

void printarray(vector<pair<int,int>>&arr,int n){
    unordered_map<int,int>mp;
    for(auto &i:arr){
        int first = i.first, second = i.second;
        if(mp.find(second)!=mp.end() && mp[second]==first){
            cout << "(" << first << "," << second << ") ";
        }
        else{
            mp[first]=second;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    //soln(arr,n);
    printarray(arr,n);
}