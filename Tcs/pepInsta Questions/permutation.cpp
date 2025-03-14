#include<bits/stdc++.h>
#include<string>
using namespace std;
string::size_type sz;
int soln(int n){
   
    int fixPresidents=2;
    n=n-1;
    int k=1;
    while(n>=1){
        k=k*n;
        n=n-1;
    }
    return k*fixPresidents;
}
int main(){
    int n;
    cin>>n;
    cout<<soln(n);

    
}