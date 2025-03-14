#include<bits/stdc++.h>
#include<string>
using namespace std;
string::size_type sz;
int soln(string s,int l){
    int max_a=0;
    int mini_max=0;
    for(int i=0;i<s.size();i=i+l){
       string s2=s.substr(i,l);                     //O(L) space
       cout<<s2<<"\n";
       int count1=count(s2.begin(),s2.end(),'a');
       if(max_a<count1){max_a=count1;}   
    }
    
    return max_a;
}
int soln2(string s,int l){
    int count=0;
    long long maxi=LONG_MIN;
    for(int i=0;i<s.size();i++){

        if(s[i]=='a'){
            count++ ;
        }
        if((i+1)%l==0||i==s.size()-1){
            if(count>maxi){
                maxi=count;
                count=0;
            }
        }
    }
    return maxi;
}
int main(){
    string s;
    int L;
    getline(cin,s);
    cin>>L;
    cout<<soln2(s,L);
}