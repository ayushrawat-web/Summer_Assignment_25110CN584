#include<stdio.h>
int sum (int a,int b)
{
    return(a+b);
}
int main()
{ 
    int x,y;
    printf("enter the no a and b:");
    scanf("%d%d",&x,&y);
    printf("the sum of a and b is %d",sum(x,y));
    return 0;
}
