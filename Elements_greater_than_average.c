#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int a[m];
    int i;
    int sum,t;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<m;i++)
    {
        if(a[i]>=sum/m)
        t++;
    }
    printf("%d",t);
}