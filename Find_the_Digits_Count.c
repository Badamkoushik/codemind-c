#include<stdio.h>
int main()
{
    int N,r,sum=0;
    scanf("%d",&N);
    while(N>0)
    {
        r=N%10;
        N=N/10;
        sum++;
    }
    printf("%d",sum);
}