
#include<bits/stdc++.h>
#include<string>
using namespace std;
string::size_type sz;
int soln(string s){
    int n=stoi(s);
    cout<<n<<"\n";
    int pro=1;
    while(n>0){
        int k=n%10;
        pro=pro*k;
        n=n/10;
    }
    return pro;
}
int main(){
    string s;
    //single word without space
    cin>>s;
    cout<<soln(s);

    
}