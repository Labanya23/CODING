#include<string.h>
#include<stdio.h>
int main(){
    char str[100];
    int i,l;
    gets(str);
    l=strlen(str);
    for(i=7;i<(l-2);i++){
        printf("%c",str[i]);
    }
    printf("\n");

}