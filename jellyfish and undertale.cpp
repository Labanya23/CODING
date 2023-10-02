#include<bits/stdc++.h>

using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
    {
       long long int a,b,n,p=0,l,i,sum=0;
       cin>>a>>b;
       cin>>n;
       long long int arr[n];
       for(i=0;i<n;i++){
       cin>>arr[i];

       sum+=arr[i];
       }
       p=a+b;
       for(i=0;i<n;i++){}
       if(sum>p){
       cout<<sum<<endl;
       }
       else{
        cout<<p<<endl;
       }

    }
    return 0;
   }
