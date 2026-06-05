#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    long int n;
    int i=0,sum=0,rem;
   printf("enter the binary no n:");
   scanf("%d",&n);
   while(n>0)
   {
    rem=n%10;
    sum=sum+rem*pow(2,i);
    n=n/10;
    i++;

   }    
   printf("no in decimal is %d",sum);
    return 0;
}
