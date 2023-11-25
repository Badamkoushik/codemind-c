#include<stdio.h>
int main()
{
    int n,t,r,a=0;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        r=t%10;
        t=t/10;
        a=a*10+r;
    }
    printf("%d",a);
    
}