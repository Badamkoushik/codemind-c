#include<stdio.h>
int main(){
    int m,n,i,j,p=0,q=0;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
             if(a[i][j]%2==0)
        {
            p=p+a[i][j];
        }
        else
        {
            q=q+a[i][j];
        }
        }
    }
    printf("%d %d",p,q);
}
    