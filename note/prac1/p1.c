#include<stdio.h>
#include<string.h>
int main()
{
    int len,c=0,i;
    char st[1001];
    scanf("%s",&st);
    len=strlen(st);
    if(len%2==0)
    {
        for(i=0; i<len/2; i++){
            if(st[i]!=st[len-i-1]) c++;
        }
        if(c==1)
        printf("Yes\n");
        else
        printf("NO\n");
    }
    if(len%2==0)
    {
        for(i=0;i<(len+1)/2;i++){
            if(st[i]!=st[len-i-1])c++;
        }
        if(c==0 || c==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}