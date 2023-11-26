#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cout<<n-1<<endl;
        }
        else if(s[i]=='#'){
            cout<<"0"<<endl;
        }

    }
    return 0;
    }
}
