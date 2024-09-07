#include<iostream>

#include<stdio.h>
using namespace std;
int main(){
    int l;
    //int c;
    char t;
    double n[12][12];
    double s=0.0;

    cin>>l;
    cin>>t;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>n[i][j];
            if(j==l){
                s+=n[i][j];
            }
        }
    }
    if(t=='S'){
        printf("%.1f\n",s);
    }
    else{
        printf("%.1f\n",s/12.0);
    }
    return 0;
}