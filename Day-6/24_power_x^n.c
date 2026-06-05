#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,n,i,result=1;
    printf("enter the no x :");
    scanf("%d",&x);
    printf("enter the power n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
        printf("%d",result);

    
    return 0;
}
