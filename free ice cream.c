#include<stdio.h>
#include<string.h>
int main(){
  int n,i;
  long long int x,sum=0,c=0;
  char ch,bl;
  scanf("%d %lld",&n,&x);
  sum+=x;
  for(i=0;i<n;i++)
    {
        scanf("%c %lld*c",&ch,&x);
        if(ch=='x') sum+=x;
        else{
            if(sum-x>=0)
                sum-=x;
            else c++;
        }
    }
    printf("%lld %lld",sum,c);
    return 0;
  }
