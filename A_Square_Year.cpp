#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n= stoi(s);
        int x= round(sqrt(n));
        if(x*x== n)
        {
            cout<<0<<" "<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}