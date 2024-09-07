#include<stdio.h>
int main(){
    int ara[]={1,2,3,4,5};
    int temp,i,j;
    for(i=0,j=4;i<5,j>=0;i++,j--){
        temp=ara[i];
        ara[i]=j;
        ara[j]=temp;
    }
    for(i=4;i>=0;i--){
        printf("%d\n",ara[i]);
    }
}