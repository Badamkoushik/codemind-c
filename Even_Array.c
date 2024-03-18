#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int res;
   for(i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
           res++;
       }
   }
   if(res==n)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}