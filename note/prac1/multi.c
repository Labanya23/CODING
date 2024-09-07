#include<stdio.h>
int main()
{
    int n1,n2,i,j,sum;
    printf("emter the n1&n2 value : ");
    scanf("%d %d",&n1,&n2);
    sum=0;
    for(i=1,j=2;i<=n1 && j<=n2;i++,j++){
        sum=sum+i*j;
    }
    printf("1*2 + 2*3 + 3*4......... %d * %d = %d",n1,n2,sum);
    return 0;
}

