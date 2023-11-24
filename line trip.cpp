#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        int sum=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum>x && x%2!=0)
        {
            cout<<sum/2<<endl;
        }
        else if(sum>x && x%2==0){
            cout<<(sum/2)-1<<endl;
        }
        else{
            cout<<x-3<<endl;
        }

    }
    return 0;
}
