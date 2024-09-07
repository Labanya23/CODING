#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    char name[20];
    while(scanf("%s",name)!=EOF){
        int n=strlen(name);
        int c=0;
        for(int i=0;i<n;i++){
            if(name[i]!=name[n-i-1]){
                c++;
            }
        }
        printf("%d \n",c/2);
    }
    return 0;
}