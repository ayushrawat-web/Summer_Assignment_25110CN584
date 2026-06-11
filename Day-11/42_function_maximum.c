#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{ int x,y,check;
    printf("enter value of a and b:");
    scanf("%d%d",&x,&y);
    check=max(x,y);
    if(check==1)
    {
        printf("a is greatest");
    }
    if(check==2)
    {
        printf("b is greatest");
    }
   
    return 0;
}