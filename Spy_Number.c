#include<stdio.h>
int main()
{
    int n,t,r,sum=0,pro=1;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        r=t%10;
        t=t/10;
        sum=sum+r;
        pro=pro*r;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}