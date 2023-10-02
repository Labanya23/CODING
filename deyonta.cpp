#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
        {
            int n,k;
            cin>>n>>k;
            int arr[n];
            InputArray(arr,n);
            rep(i,o,n){
                if(arr[i]==k){
                    flag=1;
                    break;
                }
            }
            if(flag==1)yes;
            else no;
        }
        return 0;
    }
