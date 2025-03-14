//Reverse a given Array
// Example 1:
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

#include<bits/stdc++.h>
using namespace std;
void soln(vector<int>&arr,int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
void soln2(vector<int>arr,int n){
    reverse(arr.begin(),arr.end());
    // if [1,2,3,4,5,6]
    // reverse: [1,2,3][4,5,6]=> revarse(arr.begin(),arr.begin()+n/2) revarse(arr.begin()+n/2,arr.end());
    // reverse: [2,3][5,6]=>l1=1 l2=2 l3=4 l4=5 reverse(arr.begin()+l1,arr.begin()+l1+1) revarse(arr.begin()+l3,arr.begin()+l4+1) 

}
void printarray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    soln(arr,n);
    printarray(arr,n);
}