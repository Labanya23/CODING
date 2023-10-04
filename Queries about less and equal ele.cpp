#include<bits/stdc++.h>
using namespace std;

   long long a[200005],b[200005];
   int main(){
       int n,m,i;
       cin>>n>>m;
       for(i=1;i<=n;i++)
        cin>>a[i];
        for(i=1;i<=m;i++)
            cin>>b[i];
        sort(a+1,a+n+1);
        for(i=1;i<=m;i++){
            int left=0,right=n;
        while(left<right){
            int mid=(left+right+1)/2;
            if(a[mid]<=b[i]){
                left=mid;
            }
            else{
                right=mid-1;
            }

        }
        cout<<left<<" ";

        }
        return 0;
   }
