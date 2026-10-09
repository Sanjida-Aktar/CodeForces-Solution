#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--)
     {
        int l,r;
        cin>>l>>r;
        if(l==r)
        {
            cout<<l<<endl;
        }
        else
        {
           int sum=l;
           int count=1;
           int diff = 1;
            while(sum+diff<=r)
            {
                sum+=diff;
                count++;
                diff++;
            }
            cout<<count<<endl;
        }
     }
    return 0;
}