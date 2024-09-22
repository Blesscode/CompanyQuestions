#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Toogle(int &n){
    //no to binary string ->using %
    string b_s="";
    while(n>=1){
        int digit=n%2;
        b_s=(digit+'0')+b_s;  //int->char
        n=n/2;
    }
    cout<<b_s<<endl;