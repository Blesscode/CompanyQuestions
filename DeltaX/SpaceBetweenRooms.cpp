/*Desc: 
N=no of rooms k=no of room to select
1 2 3 ... N = A[]->list of rooms nos avaliable to be used 
output -> Largest min distance that can be maintained b/w rooms

[1][2][][4][][][][8][9] =five avail room with their room no and i have to select 3rooms
1        1           1 [3,5]=          3
1        1        1    [3,4]           3
   1     1        1    [2,4],[2,5]     2
   1              1  1 [6,1]           1
                                      =>3 

2{ATLEST 2 ROOMS}<=N<=10^5{AT MAX 10^5 ROOMS}
2<=k<=N
1<=A[]<=10^9
*/
/*
```
5 3
1 2 8 4 9
=>3
```
*/
/********************BS************************/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool feasibleDistance(int mid,int A[],int N,int K){
    int firstelem=A[0];
    int count=1;
    for(int i=1;i<N;i++){
        if(A[i]-firstelem>=mid){
            firstelem=A[i];
            count++;
        }
        if(count==K){
            return 1;
        }
    }
    return 0;
}
int LargestMinDistance(int A[],int N,int K){
    sort(A,A+N);
    int start=1; //distance cannot be 0
    int end=A[N-1];
    int ans=-1;
    while(start<end){
        int mid= (end+start)/2;
        if(feasibleDistance(mid,A,N,K)){ //mid can be the min distance
            ans=max(ans,mid);
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return ans;
}
int main(){
int N,K;
cout<<"enter 2 nos"<<endl;
cin>>N>>K;
int A[N];
cout<<"enter array nos"<<endl;
for(int i=0;i<N;i++){
    //cout<<"No "<<i<<": "<<endl;
    cin>>A[i];
}
cout<<"The maximum distance among all the minimum distance is: "<<LargestMinDistance(A,N,K);
}