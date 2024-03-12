#include<stdio.h>
int main()
{
    int m,count=0;
    scanf("%d",&m);
    int a[m];
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            count++;
        }
    }
     if(count!=0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
     
}