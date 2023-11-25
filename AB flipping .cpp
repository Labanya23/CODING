#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n-1;i++){
            if(s[0]=='B'){
                cout<<"0"<<endl;

            }
            else if(s[i]=='A'|| s[i+1]=='B'){
                    c++;
            cout<<c<<endl;
            break;

            }
        }
    }
    return 0;
}
