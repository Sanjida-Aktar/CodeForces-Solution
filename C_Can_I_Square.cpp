#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    long long x= sqrt(sum);
    if(x*x == sum){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main(){
     int t;
     cin>>t;
     while(t--)
     {
        solve();  
     }
    return 0;
}