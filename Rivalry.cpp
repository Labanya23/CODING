#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	/*int a,b,c,d;
	cin>>a>>b>>c>>d;
	int f=a-c;
	int e=b-d;
	if(f<e)
	{
	    cout<<"Dominater"<<endl;
	}
	else{
	    cout<<"Everule"<<endl;
	}
	return 0;
	*/
	int r1,d1;
	char a = '-';
	int r2,d2;
	scanf("%d %d",&r1,&d1);
	scanf("%c %d %c %d",&a,&r2,&a,&d2);
	int b=r1+r2;
	int c=d1+d2;
	if(b<c){
	
	printf("Dominater\n");
	
	}
	else{
	    printf("Everule\n");
	}
    return 0;	
	
}
/*
2636 2536
-116 -11
output-
Everule

1 100
-5 -150

output-
Dominater
*/
