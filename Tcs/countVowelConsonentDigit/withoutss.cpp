#include<iostream>
#include<string>
#include<tuple>
using namespace std;

tuple<int,int,int,int> Solve(string s){
    int consonant=0;
    int vowels=0;
    int digits=0;
    int special=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowels+=1;
            }
            else{
                consonant+=1;
            }
        }
        else if(s[i]>='0' && s[i]<='9'){
            digits+=1;
        }
        else{
            special+=1;
        }
    }

    return{consonant,vowels,digits,special};
}

int main(){
    string s;
    cin>>s;
    auto a=Solve(s);
    cout<<get<0>(a)<<" " <<get<1>(a)<<" " <<get<2>(a)<<" " <<get<3>(a)<<endl;
    return 0;
}