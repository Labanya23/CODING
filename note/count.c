#include<stdio.h>
//using namespace std;
int main()
{
    char test,i,a,total,c=0,r=0,s=0;
    char ch;
    double x,y,z;

    scanf("%d",&test);

    for(i=1;i<=test;i++){
        scanf("%d %c",&a,&ch);
        if(ch=='C')
        {
            c+=a;
        }
        else if(ch=='R'){
            r+=a;
        }
        else{
            s+=a;
        }
    }
    total = c+r+s;

    x=(c*100.00)/total;
    y=(r*100.00)/total;
    z=(s*100.00)/total;

    printf("Total : %d cobaias\n",total);
    printf("Total de ratos: %d\n",c);
    printf("Total de sapos : %d\n", s);
    printf("Percentual de chelhos : %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual da sapos: %.2lf %%\n",z);

    return 0;

}