/*
 Print the elements that have appeared even number of times
 N=5 [1,1,2,3,2] =>1,2
*/

// SOLN1: sort = nlogn time
// SOLN2: hashmap = n space
// SOLN3:   ?     = N time and 1 space = not possible

#include<bits/stdc++.h>
#include<string>
using namespace std;

int soln2(vector<int>arr,int n){
    int max_array=1000;
    int count=0;
    int mpp[max_array+1]={0};
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(int i=0;i<max_array;i++){
        if(mpp[i]%2==0 && mpp[i]>0){
            count++;
            cout<<mpp[i]<<"\n";
        }
    }
    /*for(auto &it:mpp){
        //cout<<"all "<<it.first<<" : "<<it.second<<"\n";
        if(it.second%2==0){
            count++;
            cout<<"ans "<<it.first<<" : "<<it.second<<"\n";
        }

    }*/
    return count;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    soln2(arr,n);
}
