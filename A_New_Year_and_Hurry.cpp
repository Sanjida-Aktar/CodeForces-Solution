#include<bits/stdc++.h>
using namespace std;
int main(){
     int t,n;
     cin>>n>>t;
     int time = 240-t;
     int count = 0;
     int sum = 0;
     for(int i=0; i<n; i++)
     {
        sum += (i+1)*5;
         if(sum <= time)
         {
             count++;
         }
         else break;
     }
     cout<<count<<endl;
    return 0;
}