# Find Second Smallest and Second Largest Element in an array
/*Input:
 [1,2,4,7,7,5]
Output:
 Second Smallest : 2
	Second Largest : 5
Explanation:
 The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2*/
#include<bits/stdc++.h>
using namespace std;
int soln(vector<int>&arr,int n){
    int largest=INT_MIN;
    int secondlarge=INT_MIN;
    if(n=0 || n=1){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlarge=largest;
            largest=arr[i];
        }
        if(arr[i]>secondlarge && secondlarge!=largest){
            secondlarge=arr[i];
        }
    }
    return secondlarge;
}
void printarray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<soln(arr,n);
    //printarray(arr,n);
}