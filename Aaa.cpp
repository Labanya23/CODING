#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s;
    ////cin>>s;
    //int flag=0;
   // for(int i=0;i<s;i++){
       //if(s[i].find=="Be" || s[i].find=="be"  || s[i].find=="BE"){
       //if(s="Be" || s="be" || s="BE"){
           // flag=1;
        //}
    //}
    //if(flag){
        //cout<<"YES"<<endl;
    //}
    //else{
        //cout<<"NO"<<endl;
    //}
   // string s;
    string s[100];
    //cin>>s;
    //string s;
    int d=0;
    char c='BE';
    char a='be';
    char w='bE';
    char y='Be';
   // gets(s);
    cin>>s;
    int l=strlen(s);
    for(int i=0;i<l;i++)
        //char c='BE','be','BE';
    {
       //if(s.find()="be" || s.find()="BE" || s.find()="Be") {
       if(s.find(c) || s.find(a) || s.find(w) || s.find(y))
        d++;
       }
    }
    //int f=0;
    //for(int i=0;i<s;i++){
    //for(int i=0;i<s;i++){
    //if(s=="BE" || S="be" || s=="Be"){
    //if(s[100].find="BE" || s[100].find="Be" || s[100].find="be")

    //}

    if(d==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}
