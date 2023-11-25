#include<stdio.h>
int main()
{
    int n,r,a=0;
    scanf("%d",&n);
    while(n>0||n<0)
    {
        r=n%10;
        n=n/10;
        a=a*10+r;
    }
    printf("%d",a);
}