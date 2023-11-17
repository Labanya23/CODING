#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        cin>>a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //int max=a[0],min=a[0];
        int max,min;
        for(int i=0;i<n;i++){
        if(a[i]<max){
            max=a[i];
        }
        if(a[i]>min){
            min=a[i];
        }
        }
        int m=max-min;
        cout<<m<<endl;

        //int m=max(a[i],a[i+1]);
        //int n=min(a[i],a[i+1]);
    }
    //int r=m-n;
    //cout<<r<<endl;


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m=0;
        cin>>n;
        long long a[n];
        cin>>a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ma=a[0],mi=a[0];
        //int ma,mi;
        for(int i=0;i<n;i++){
        if(a[i]>ma){
            ma=a[i];
        }
        if(a[i]<mi){
            mi=a[i];
        }
         m=ma-mi;
        }
        //int m=ma-mi;
        cout<<m<<endl;


        //int m=max(a[i],a[i+1]);
        //int n=min(a[i],a[i+1]);
    }
    //int r=m-n;
    //cout<<r<<endl;


    return 0;
}

