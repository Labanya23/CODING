#include<stdio.h>
int main()
{
    int n,m,i,temp=24;
    scanf("%d %d", &n,&m);
    if(n>m)
    {
        for(i=n;i<=temp;i++){//i=25;i<=24;i++
            if(i==24)//
            {
                i=0;
                temp=m;
            }
            printf("%d",i);
        }
    }
    for(i=n;i<=m;i++){
        printf("%d",i);
    }
    return 0;
}

/*
sample input
5 12
25 7

output--
5 6 7 8 9 10 11 12

21 22 23 0 1 2 3 4 5 6 7



*/