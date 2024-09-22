#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string LexioString(string s,int p){
   map<char,int>mpp;
   for(int i=0;i<s.size();i++){
    mpp[s[i]]++;
   }
   string temp="";
//    for(auto &i:mpp){
//     cout<<i.first<<i.second<<endl;
//     if(i.second>p){
//         temp=temp+i.first;
//     }
//    }
   int maxi=0;
   for(auto itr=mpp.begin();itr!=mpp.end();itr++){
    if(itr->second>maxi){
        maxi=itr->second;
        temp=itr->first;
    }
   }
   /* FOR LEXIOGRAPHIC
   sort(temp.begin(),temp.end());*/
   
   return temp;
}

int main(){
    string s;
    cin>>s;
    int p;
    cin>>p;
    cout<<LexioString(s,p);
}