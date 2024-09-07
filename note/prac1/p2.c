#include<stdio.h>
int main()
{
    int i,wl=1;
    char s[1000];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
          wl++;
    }
    printf("%d",wl);
    return 0;
}