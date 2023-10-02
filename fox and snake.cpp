#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m,i,j,c=0;
   cin>>n>>m;
   for(i=1;i<=n;i++)
    {
        if(i%2==0){
            c++;
            if(c%2==0)
                cout<<"#";
            for(j=1;j<m;j++){
                cout<<".";
            }
            if(c%2!=0)  cout<<"#";
        }
        else{
            for(j=1;j<=m;j++){
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
   }
