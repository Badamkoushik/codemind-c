#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int p,q;
    scanf("%d%d",&p,&q);
    int b[p][q];
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("
");
    }
    
}