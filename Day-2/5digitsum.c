#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,digit,sum=0;
    printf("enter the digit:");
    scanf("%d",&n);
    while(n!=0)
    {
    digit=n%10;
    sum=sum+digit;
    n=n/10;
}
printf("sum is %d",sum);
    return 0;
}
