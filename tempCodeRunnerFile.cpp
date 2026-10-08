#include<bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     cin>>n;
     while(n--){
        int x;
        cin>>x;
        int count=0;
        
        for(int i=x; i<=x+90; i++)
        {
           if(i-digitSum(i)==x)
           {
            count++;
           }
        }
        cout<<count<<endl;
     }
    return 0;
}