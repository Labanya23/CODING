#include<stdio.h>
int main(){
    int i,j,n,k;

    printf("enter the factorial number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        j=1;
        for(k=1;k<=i;k++){
            j=j*k;
        }
        printf("!%d = %d \n",i,j);
    }
    return 0;
}
/*
i=1;
k=1
j=1;;j=1*1;
i=2;j=1*2;
i=3;j=2*3;
i=4;j=6*4=24


*/