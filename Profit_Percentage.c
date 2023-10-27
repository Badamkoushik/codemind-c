#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float profit;
    profit=y-x;
    float profitpercentage;
    profitpercentage=(profit/x)*100;
    printf("%.2f",profitpercentage);
}