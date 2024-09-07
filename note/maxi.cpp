#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int mx1=0,mx2=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i])
            swap(a[i],b[i]);
            mx1=max(mx1,a[i]);
            mx2=max(mx2,b[i]);
        }
        if(mx1==a[n-1] && mx2==b[n-1])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        
    }
    return 0;
}