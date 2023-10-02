#include<stdio.h>
#include<string.h>
int main(){
  long int n,i,c=0,e=0,f=0;
  scanf("%lld",&n);
  i=n;
  while(n!=0)
    {
        f++;
        int t=n%10;
        n/=10;
        if(t==4 || t==7){
            e++;
        }
    }
    if(e==f || i%4==0 || i%7==0 || i%47==0 ||i%74==0){
        printf("YES");
    }
    else{
        printf("NO");
        return 0;
    }
  }
