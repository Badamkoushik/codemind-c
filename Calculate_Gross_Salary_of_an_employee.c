#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf=12.0/100*bs;
    float res=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,res);
}