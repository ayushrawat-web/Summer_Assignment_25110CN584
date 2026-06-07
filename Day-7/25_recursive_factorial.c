#include<stdio.h>
int fact(int);
 int main(int argc, char const *argv[])
{
    int n,result;
    printf("enter the no for factorial:");
    scanf("%d",&n);
     result=fact(n);
     printf("the factorial of n is %d",result);
     return 0;
}
int fact(int n)
{
if(n==1)
{
    return(1);
}
else
{
    return(n*fact(n-1));
}
}