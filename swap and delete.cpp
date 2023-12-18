#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
       long int c=0,r=0;
         long int n=1000000000000;
        cin>>s;
        for(  int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;
        }
        else if(s[i]=='1'){
            r++;
        }
    }
    if(r==c){
        cout<<"0"<<endl;
    }
    else if(r>c){
        cout<<r<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
return 0;
}
