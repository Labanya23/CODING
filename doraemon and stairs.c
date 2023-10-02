#include<stdio.h>
#include<string.h>
int main(){
   int n,m,i,c=0;
   scanf("%d %d",&n,&m);
   for(i=(n+1)/2;i<=n;i++){
    if(i%m==0){
        printf("%d\n",i);
        c=1;
        break;
    }
   }
   if(c==0) printf("-1\n");
   return 0;


   }
