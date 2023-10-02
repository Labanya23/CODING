#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
    {
        int a;
        cin>>a;
        int r=2;
        float p,l,s;
        p=3.14*r*r+0.01;
        l=a*6;
        s=l-p;
        cout<<p<<" "<<s<<endl;
    }
    return 0;
  }
