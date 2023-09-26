#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
    {

        int i,n,k;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){

        if(a[i]!=k){


             {
            cout<<"NO"<<endl;

             }

        }
        else
        {

           cout<<"YES"<<endl;
           break;
        }
        }

    }
    return 0;

  }
