#include<bits/stdc++.h>
using namespace std;
int main(){
 int x1,x2,x3,m1,mid,m2,t1,t2;
 cin>>x1>>x2>>x3;
 if(x1>=x2 && x1>=x3)
    {
        m1=x1;
        if(x2>=x3 ){
            mid=x2;
            m2=x3;
        }
        else {
            mid=x3;
            m2=x2;
        }
    }
    else if(x2>=x1 && x2>=x3){
        m1=x2;
        if(x1>=x3){
            mid=x1;
            m2=x3;
        }
        else{
            mid=x3;
            m2=x1;
        }
    }

        if(x3>=x1 && x3>=x2){
        m1=x3;
        if(x2>=x1){
            mid=x2;
            m2=x1;
        }
        else{
            mid=x1;
            m2=x2;
        }
    }
    t1=m1-mid;
    t2=mid-m1;
    cout<<t1+t2<<endl;
    return 0;

 }
