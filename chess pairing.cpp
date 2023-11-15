#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int b=2*n;
        if(n==x || x==0)
        {
            cout<<"0"<<endl;
        }
        else if(b==x){
            cout<<x<<endl;
        }
        else{
            cout<<n<<endl;
        }
        
        
    }
	// your code goes here
	return 0;
}
/*
6
1 0
1 1
1 2
4 4
4 6
10 20

output-

0
0
2
0
4
20
*/
