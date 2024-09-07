#include <cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void check(){
    string a1,b1;
    cin>>a1>>b1;
    int i=0,j=0;
    int t=5;
    int c=0;
    while(t--){
        if(a1[c]=='1'){
            i++;
        }
        if(b1[c]=='1'){
            j++;
        }
        c++;
    }
    if(i>j){
        cout<<"Argentina"<<endl;
    }
    else if(j>i){
        cout<<"Brazil"<<endl;
    }
    else{
        check();
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    if(a!=b){
        if(a>b){
            cout<<"Argentina"<<endl;
        }
        else{
            cout<<"Brazil"<<endl;
        }
        cout<<endl;
    }
    else{
        check();
    }
    return 0;
}


