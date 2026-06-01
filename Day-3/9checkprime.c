#include<stdio.h>
int main()
{
    int n,prime=1,i;
    printf("enter the number to ckeck:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
    prime=0;
    break;
    }
        }
if(prime==0)
{
    printf("it is not prime number");
}
else
{
 printf("it is prime number");
}
    
    return 0;
}
