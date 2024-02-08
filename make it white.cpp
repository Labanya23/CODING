#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=n,r=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B'){
                l=min(l,i);
                r=max(r,i);
            }
            /*
            1st tym 6=min(6,1)
            2nd tym 1=min(1,2)
            3rd tym 1=min(1,4)
            =====1
            not found other b

            in case of r
            -1=max(-1,1)
            1=max(1,2)
            2=max(2,4)
            =========4
            not found other b
            */
        }
        if(l==n){
            cout<<"1"<<endl;
        }
        else{
            cout<<max(r-l+1,1)<<endl;//not same;(4-1+1,1)==4
        }
    }
    return 0;
}
