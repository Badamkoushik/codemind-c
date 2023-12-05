#include<stdio.h>
int main()
{
    float base1,base2,height;
    scanf("%f%f%f",&base1,&base2,&height);
    float area;
    area=(base1+base2)*height/2;
    printf("%.4f",area);
}