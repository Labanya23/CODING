#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,k;
        int a[n];
        for(i=1;i<=n && i>=n;i++&&i--){
            cin>>a[i];
        }
        int max=0;
        if(a[i]>max){
            max+=a[i];
            cout<<max<<endl;
        }
        else if (a[i]<max){
            max+=a[i];
            cout<<max<<endl;
            
        }
    }
	// your code goes here
	return 0;
}
