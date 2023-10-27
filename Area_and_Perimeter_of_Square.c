#include<stdio.h>
int main()
{
    int side;
    scanf("%d",&side);
    int area,perimeter;
    area=side*side;
    perimeter=4*side;
    printf("%d %d",area,perimeter);
}