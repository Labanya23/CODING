#include<stdio.h>
int main()
{
    int a[6]={10,20,30,40,50},p,n,b[6],i;
    scanf("%d %d",&p,&n);
    if(p==0){
        b[p]=n;
        for(i=1;i<6;i++){
            b[i]=a[i-1];
        }
    }
    else if(p==5)
    {
        b[p]=n;
        for(i=0;i<5;i++){
            b[i]=a[i];
        }
    }
    else{
        b[p]=n;
        for(i=0;i<p;i++){
            b[i]=a[i];
        }
        for(i=p+1;i<6;i++){
            b[i]=a[i-1];
        }
    }
    for(i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<6;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}