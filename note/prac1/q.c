#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],ele;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int countone,elementone,counttwo,elementtwo;
        ele=a[0];
        for(int i=0;i<n;i++){
            if(ele==a[i]){
                countone++;
                elementone=a[i];
            }
            else{
                counttwo++;
                elementtwo=a[i];
            }
        }
        if(countone>counttwo){
            for(int i=0;i<n;i++){
                if(elementtwo==a[i]){
                    printf("%d",i+1);
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(elementtwo == a[i]){
                    printf("%d",i+1);
                    break;
                }
            }
        }
    }
}