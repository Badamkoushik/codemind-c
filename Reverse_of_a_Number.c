#include<stdio.h>
int main()
{
    int N,r,a=0;
    scanf("%d",&N);
    while(N>0)
    {
        r=N%10;
        N=N/10;
        a=a*10+r;
    }
    printf("%d",a);
}