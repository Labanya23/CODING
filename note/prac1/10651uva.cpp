#include<iostream>
using namespace std;

int maxSumm(int rev[],int n){
    int mSum=0,maxSub=0;
    for(int i=0;i<n;i++){
        mSum=max(0,mSum+rev[i]);
        maxSub=max(mSum,maxSub);
    }
    return maxSub;
}
int main(){
    int t,c;
    cin>>t>>c;
    int rev[t];
    for(int i=0;i<t;i++){
        cout<<"Input per day revenue:";
        cin>>rev[i];
        rev[i]-=c;
    }
    cout<<maxSum(rev,t)<<endl;

    return 0;
}