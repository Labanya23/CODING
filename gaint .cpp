//3 walls
//(3),
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for( int i=0;i<n;i++){
        cin>>c[i];
    }
    //int t=3;
    //while(t)
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            max=a[i];
        }
        //int v=max;




   // for(int i=0;i<n;i++){

         if(b[i]==max && c[i]==max){
                //cout<<max<<endl;
                flag=1;

        //}


        //}
        //else{
           // cout<<"-1"<<endl;
       // }
}

}

if(!flag){
    cout<<max<<endl;
}
else{
    cout<<"-1"<<endl;
}
        //if{
           // cout<<"-1"<<endl;
        //}

    //}
    return 0;

}
