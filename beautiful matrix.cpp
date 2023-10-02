#include<bits/stdc++.h>
using namespace std;
int main(){
       int i,j,arr[5][5],r,c,ar,ac;
       for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                r=i;
                c=j;
            }
        }
       }
       if(r<2)
        ar=2-r;
       else ar=r-2;
       if(c<2)
        ac=2-c;
       else ac=c-2;
       cout<<ar+ac<<endl;
       return 0;
  }
