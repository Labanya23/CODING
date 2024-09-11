#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    
	    int a,b,c;
	    float g;
	    cin>>a>>b>>c;
	    if(b<=c){
	       cout<<"0"<<endl;
	        
	    }
	    else {
	        g=a*0.01;
	       int n=ceil(g*b);
	       int f=b-n;
	       int l=b-c;
	       if(f<=c){
	           cout<<n<<endl;
	       }
	       else{
	           cout<<"-1"<<endl;
	       }
	    }
	}
	return 0;

}
