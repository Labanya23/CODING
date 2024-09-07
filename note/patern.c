#include<stdio.h>
int main()
{
    int n,row,col;
    printf("enter the value");
    scanf("%d",&n);

    if(1<n<=20){
        for(row=1;row<=n;row++){
            for(col=1;col<=n;col++){
                printf("*");
            }
            printf("\n");
        }
        for(row = n-1;row>=1;row--){
            for(col=1;col<=row;col++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}