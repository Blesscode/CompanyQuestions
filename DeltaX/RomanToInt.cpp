/*I=1 V=5 X=10 L=50 C=100 D=500 M=1000 */
// 2 =II 
// 12=X + II 
// 27=XX+ V+ II


//XXIV=10+10+1+5=26.....10+10-1+5=24
/*Noting that all valid roman nos are only added */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int RomanToInt(string s){
    unordered_map<char,int>mpp;
    mpp['I']=1;
    mpp['V']=5;
    mpp['X']=10;
    mpp['L']=50;
    mpp['C']=100;
    mpp['D']=500;
    mpp['M']=1000;

    int sum=0;
    int size=s.length() ;
    int last=mpp[s[size-1]];
    for(int i=0;i<size-1;i++ ){
        if(mpp[s[i]]<mpp[s[i+1]]){
            sum-=mpp[s[i]];
        }else{
            sum+=mpp[s[i]];
        }
    }
    sum+=last;
    return sum;
}
int main(){
    cout<<"enter the string";
    string s;
    cin>>s;
    cout<<RomanToInt(s);
}