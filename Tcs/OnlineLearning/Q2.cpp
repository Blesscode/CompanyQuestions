#include<bits/stdc++.h>
using namespace std;
int soln(int n){
    bitset<4>a;
    a.flip();
    return((int)a.to_ulong());
}
int main(){
    int n;
    cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout<<soln(n);
}