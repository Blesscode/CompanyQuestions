#include<bits/stdc++.h>
using namespace std;
void soln(int n,string s){
    //1. If multiple of 7
   if(n%7==0){
    cout<<n/7;
   }

   // 2. If not multiple of 7
   
   //1. closestmultiple of 7 to the day
   int week_day;
   int word_days[7]={0,1,2,3,4,5,6};
   if(s=="sunday"){
    week_day=0;
   }
   if(s=="monday"){
    week_day=1;
   }
   if(s=="tuesday"){
    week_day=2;
   }
   if(s=="wednesday"){
    week_day=3;
   }
   if(s=="thrusday"){
    week_day=4;
   }
   if(s=="friday"){
    week_day=5;
   }
   if(s=="saturday"){
    week_day=6;
   }
   // 2. calc no of mains weeks
   int count=0;
   int i=1;
   while(count<n){
    count=7*i; //35
    i++;
   }
   
   //the total no of proper weeks
   count=count-7;
   int main_weeks=count/7; 
   // 3. calc extra days
   int extra_days=0;
   while(count!=n){
    count=count+1;
    extra_days++;
   }
   

   //3. odds days for which day

   //case1: starting day = sunday
   if(s=="sunday"){
    cout<< main_weeks+1;
   }
   else{
    while(extra_days!=0){
        week_day++;
        extra_days--;
        if(word_days[week_day]==0){
            cout<< main_weeks+1;
           return ;
        }
    }
    cout<< main_weeks;
   }
   return ;
}
int main(){
    // 1. array creation
        int n;
        cout<<"enter value: \n";
        cin>>n;
        string s;
        cin.ignore();
        getline(cin,s);
        soln(n,s);
    }