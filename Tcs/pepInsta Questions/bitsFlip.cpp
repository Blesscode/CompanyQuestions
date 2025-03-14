#include<bits/stdc++.h>
using namespace std;
int soln(int &n){
    //1. Decimal->Binary 
    bitset<4> b(n); 
    //2. flip till MSB
    b.flip(); 
    cout<<b<<"\n";
    //3. Binary -> Decimal
    unsigned long a=(int)b.to_ulong();
    return a;
}
int main(){
    // 1. array creation
        int n;
        cout<<"enter value: \n";
        cin>>n;
        cout<<soln(n);
    }