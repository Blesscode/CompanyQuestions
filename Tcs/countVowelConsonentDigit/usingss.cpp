//O(n^2)

#include<iostream>
#include<string>
#include<tuple>
#include<sstream>
using namespace std;

tuple<int,int,int,int> Solve(string s){
    int consonant=0;
    int vowels=0;
    int digits=0;
    int special=0;

    stringstream ss(s);
    string word;
    while(ss>>word){
    for(char ch:word){
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels+=1;
            }
            else{
                consonant+=1;
            }
        }
        else if(ch>'0' && ch<'9'){
            digits+=1;
        }
        else{
            special+=1;
        }
    }
    }
    return{consonant,vowels,digits,special};
}

int main(){
    string s;
    getline(cin,s);
    auto a=Solve(s);
    cout<<get<0>(a)<<" " <<get<1>(a)<<" " <<get<2>(a)<<" " <<get<3>(a)<<endl;
    return 0;
}