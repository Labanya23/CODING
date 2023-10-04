#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--)
    {
        int a,b,c,d,y,k=0,p=1,i;
        cin>>a>>b>>c>>d;
        int x[50005];
        y=b;
        for(i=0;i<a;i++)
            cin>>x[i];
        for(i=1;i<a;i++){
        if(x[i]<=x[k]+c+d && y>=0){
            y--;
        }
        if(x[i]>x[k]+c+d || y=0){
            k=i;
            y=b;
            p++;
        }
    }
    cout<<p<<endl;
    }
    return 0;
  }
