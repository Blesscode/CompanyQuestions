#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintPath(vector<vector<int>>&arr,string path,int x,int y,int n,int m,int &count){
    //Base Cond
   // cout<<"The value of x and y are:"<<"x: "<<x<<"y: "<<y<<"m: "<<m<<"n: "<<n<<endl;
    if(x==n && y==m){
        path.push_back(arr[x][y] + '0'); //last elem
        count=count+1;
       // cout<<"your 1st path: "<<path<<" ,Last digit: "<<arr[n][m]<<endl;
       cout<<"your path: "<<path;
       cout<<" path no: "<<count<<endl;
       return;
    }
    string path1=path;
    string path2=path;
    if(y==m && y>x){
        path1.push_back(arr[x][y]+'0');
        PrintPath(arr,path1,x+1,y,n,m,count);
    }
    else if(x==n && x>y){
        path2.push_back(arr[x][y]+'0');
        PrintPath(arr,path2,x,y+1,n,m,count);
    }
    else{
        path1+=arr[x][y]+'0';
        path2+=arr[x][y]+'0';
        PrintPath(arr,path1,x,y+1,n,m,count);
        PrintPath(arr,path2,x+1,y,n,m,count);
    }
}
int main(){
    int x=0;
    int y=0;
    int n,m;
    cout<<"enter m and n"<<endl;
    cin>>m>>n;
    string path=" ";
    int count=0;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cout<<"enter cell value: "<<i<<" "<<j<<endl;
            cin>>arr[i][j];
        }
    }
    PrintPath(arr,path,x,y,m-1,n-1,count);
}