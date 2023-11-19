#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,te;
        int c=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
                if(v[i]<v[i+1]){
                    te=v[i];
                    v[i]=v[i+1];
                    v[i+1]=te;
                    c++;

                }
                else{
                    break;
                }
        }
            //sort(n,v+n);
           // c++;

        cout<<c<<endl;
    }
    return 0;
}
