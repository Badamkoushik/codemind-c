#include<stdio.h>
int main()
{
    int n,i,sum=0,res,j,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }    
    sum=sum*sum;
        for(j=1;j<=n;j++)
        {
           count=count+j*j;
        }
    if(sum>count)
    {
    printf("%d",sum-count);
    }
    else
    {
        printf("%d",count-sum);
    }
}