#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int count=0;
        //int count;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            //if(a[i]>a[i+1])
        }
        //for(int i=0;i<n;i++){
            sort(a.begin(),a.end());
       // if(a[i]>a[i+1])


                //swap(a[i+1],a[i]);
       // }

            count++;

        if( count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
