/*#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
    {
        int a;
        cin>>a;
        int r=2;
        float p,l,s;
        p=3.14*r*r+0.01;
        l=a*6;
        s=l-p;
        cout<<p<<" "<<s<<endl;
    }
    return 0;
  }
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pl acos(-1.0)
int main(){
 int t;
 cin>>t;
 while(t--)
    {

        double width,len,r,areag,arear;
        scanf("%lf",&len);
        width=(len*6)/10;
        r=(len/5);
        arear=(pl*r*r);
        areag=(len*width)-arear;
        printf("%0.2lf %0.2lf\n",arear,areag);

    }
 }
