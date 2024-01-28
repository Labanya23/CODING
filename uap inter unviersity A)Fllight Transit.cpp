#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,c;
    cin>>n;
    while(n--)
    {
        int t,n,f;
        cin>>t>>n>>f;
        c=t-n-f;
        s=max(s,c);
    }
    cout<<s<<endl;
    return 0;
}
/*
INPUT--
2
10 4 2
12 2 3
OUTPUT-7
*/
