#include<stdio.h>
int main(int argc, char const *argv[])
{
   int n,i,fact=1;
   printf("enter number for factorial:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    fact=fact*i;
   }
   printf("%d",fact);

    return 0;
}
