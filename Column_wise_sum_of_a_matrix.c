#include<stdio.h>
int main()
{
    int r,c,i,j,columnsum;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        columnsum=0;
        for(j=0;j<r;j++)
        {
            columnsum=columnsum+a[j][i];
        }
        printf("%d ",columnsum);
    }
    
}