#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     while(n--){
        int count=0;
        int x;
        cin>>x;
        int r;
        int y;
        for(int i=x; i<x+90; i++)
        {
            int fsum=0;
           while(x>0)
           {
            x= x%10;
            fsum+=x;
            x=x/10;
           }
           if((i-fsum)==x){
            count++;
           }
        }
        cout<<count<<endl;
     }
    return 0;
}