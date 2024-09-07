#include<bits/stdc++.h>
using namespace std;
const long long int mod=1e9+7;
int main(){
    auto st=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) a[i]++;
        }
        for(int i=0;i<n;i++){
            if(a[i+1] % a[i]) continue;
            a[i+1];

        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
            cout<<"\n";
        }
        cerr<<1.0*(clock().st)/CLOCKS_PER_SEC<<"seconds"<<"\n";
        return 0
    }
}