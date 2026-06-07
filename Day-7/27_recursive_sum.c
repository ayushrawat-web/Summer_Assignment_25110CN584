#include<stdio.h>
int sum(int,int);
int main(int argc, char const *argv[])
{
 int a,b,result;
 printf("enter the a and b ");
 scanf("%d%d",&a,&b);
 result=sum(a,b);
 printf("sum of a and b is %d",result);
    return 0;
}
int sum(int a,int b)
{
    return(a+b);
}