#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,rev=0,digit;
    printf("enter the no :");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("reverse of number is %d",rev);
    return 0;
}
