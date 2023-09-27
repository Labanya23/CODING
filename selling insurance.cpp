#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    float a,b,l;
	    if(x<5){
	        a=float(x)/5;
	        b=(100/a);
	        cout<<b<<endl;
	    }
	    
	    else{
	    a=x/5;
	    b=(100/a);
	    cout<<ceil(b)<<endl;
	    }
	    
	}
	return 0;
}
