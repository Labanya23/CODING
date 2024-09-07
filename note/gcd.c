#include<stdio.h>
int main()
{
    int a,b,gcd,i;
    scanf("%d %d",&a,&b);
    if(a<b){
        gcd=a;
    }
    else{
        gcd=b;
    }
    for(i=gcd;i>0;i--){
        if((a%i==0) && (b%i==0)){
            printf("the gcd is %d",i);
            break;
        }
    }
    return 0;
}