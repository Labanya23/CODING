#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        //int n;
        int n;
        //cin>>n;
        int c1=0;
        int c2=0;
        int i;
       // string n[a];
       cin>>n;
       //string a[n];
       //auto n[a];
       //char a[n] = {0};
       char str1[n];
       //gets(str1);
       for(i=0;i<n;i++){
            gets(str1);
        for(i=0;i<strlen(str1);i++)
        {
            //cin>>a[i];
            if(str1[i]=='A')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
       }
        if(c1>c2)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}
// WRONG ANSWER
