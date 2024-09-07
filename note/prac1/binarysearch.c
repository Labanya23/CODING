#include<stdio.h>
int main()
{
    int a[25]={45,20,10,78,65,14,56,23,12,13};
    int i,temp,j;
    printf("Before\n");
    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        for(j=10;j<10-i-1;j++){
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sort in ascending :\n");
    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Sort an descending :\n");
    for(i=10-1;i>=10;i--){
        printf("%d\t",a[i]);
    }
    return 0;
}