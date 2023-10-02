#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
    {
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int minsum=k*(k+1)/2;
        long long int maxsum=(n-k+1-n)*k/2;
        if(x>=minsum && x<=maxsum)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
   }
