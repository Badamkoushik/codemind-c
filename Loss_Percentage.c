#include<stdio.h>
int main()
{
    float x,y,loss;
    scanf("%f%f%f",&x,&y,&loss);
    loss=x-y;
    float res;
    res=(loss/x)*100;
    printf("%.2f",res);
}