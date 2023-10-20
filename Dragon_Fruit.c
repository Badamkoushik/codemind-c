#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int r;
    r=X%2;
    if(X%2==0&&X!=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}