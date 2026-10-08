#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--)
     {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
    int ans= n/(a+b+c);
    int r= n%(a+b+c);
    int day= ans*3;
    if(r>0){
        if(r<=a){
            day++;
        }
        else if (r<=b+a){
            day+=2;
        }
        else{
            day+=3;
        }
    }
cout<<day<<endl;
     }
    return 0;
}