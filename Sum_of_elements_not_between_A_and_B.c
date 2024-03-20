#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,sum=0,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q;
    scanf("%d%d",&p,&q);
    for(j=0;j<n;j++)
    {
        if(a[j]<p||a[j]>q)
        {
              sum=sum+a[j];
        }
        
    }
    printf("%d",sum);
}