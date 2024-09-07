#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();

    int a[26]={0};

    string tmp="AHIMOTUVWXY";
    for(int i=0;i<tmp.size();i++){
        a[tmp[i]-'A'] =1;
    }
    bool flag=true;
    for(int i=0;i<=n/2;i++){
        if(s[i] != s[n-i-1] || !a[s[i]-'A'])
        flag=false;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}