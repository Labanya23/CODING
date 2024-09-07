#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int n,i,board[43][4],a,b,count=0,j;
    scanf("%d",&n);
    for(i=1 ;i<=n;i++){
        scanf("%d%d",&a,&b);
        board[a][b]=1;
    }
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            if(board[i][j]!=1){
                printf("%d %d\n",i,j);
                count++;
            }
        }
    }
    return 0;
}

/*
sample input-
3
2  1
3  3
1  3

output--
1 1
1 2
2 2
2 3
3 1
3 2





*/