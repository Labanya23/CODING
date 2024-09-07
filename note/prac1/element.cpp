#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll c=(*max_element(a.begin(),a.end()))-(*min_element(a.begin(),a.end()));
        ll sum=accumulate(a.begin(),a.end(),0LL);
        if(sum>=c){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
        vector<ll>negs,poss;
        for(int i=0;i<n;i++){
            if(a[i]<0) negs.push_back(a[i]);
            else poss.push_back(a[i]);

        }
        sort(negs.begin(),negs.end(),greater<ll>());
        sort(poss.begin(),poss.end(),greater<ll>());
        vector<ll>ans;
        sum=0;
        for(int i=0;i<poss.size();i++){
            if(sum+poss[i]>=c){
                while(sum+poss[i]>=c){
                    sum+=negs.back();
                    ans.push_back(negs.back());
                    negs.pop_back();
                }
            }
            sum+=poss[i];
            ans.push_back(poss[i]);

        }
        while(!negs.empty()){
            ans.push_back(negs.back());
            negs.pop_back();
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}