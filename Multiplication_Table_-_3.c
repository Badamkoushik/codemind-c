#include<stdio.h>
int main()
{
    int N,A=14,B;
    scanf("%d%d%d",&N,&A,&B);
    while(A<=B)
    {
        
        printf("%d x %d = %d
",N,A,N*A);
        A++;
    }
    
}