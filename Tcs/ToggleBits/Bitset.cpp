#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Toogle(int &n){
    bitset<32>bit(n);
    int pos=0;
    //Find MSB
    while(n>0){
        n=n>>1;
        pos++;
    }
    cout<<pos<<endl;
    //bit mask till MSB
    bitset<32>mask;
    mask=~(~0<<pos);
    cout<<"the bit is: "<<bit<<endl;
    cout<<"the mask is: "<<mask<<endl;
    //Xor the number
    bit=bit^mask;

     cout<<bit<<endl;

    int ans=(int)(bit.to_ulong());
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<Toogle(n);
}