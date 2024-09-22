#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Toogle(int &n){
    //no to binary string ->using %
    string b_s="";
    while(n>=1){
        int digit=n%2;
        b_s=to_string(digit)+b_s;  //int->char
        n=n/2;
    }
    cout<<b_s<<endl;

    //check for 0 and 1
    for(char &i:b_s){
        i=(i=='1')?'0':'1';
    }
    cout<<b_s<<endl;

    //binary string to no
    int rem=0;
    for(int i=0;i<b_s.size()-1;i++){
        if(b_s[i]=='1'){
            rem+=pow(2,b_s.size()-i-1);
        }
    }
    return rem;
    
}
int main(){
    int n;
    cin>>n;
    cout<<Toogle(n);
}