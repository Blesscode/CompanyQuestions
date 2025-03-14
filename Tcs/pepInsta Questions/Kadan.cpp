#include<bits/stdc++.h>
#include<string>
using namespace std;
string::size_type sz;
void soln(vector<int>&arr,int n){
    int start=0;
    int end=0;
    int temp_start=0;

    long long maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
            start=temp_start;
            end=i;
        }
        //Too small
        if(sum<0){
            sum=0;
            //new start
            temp_start=i+1;
        }
    }

    return;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    soln(arr,n);

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}