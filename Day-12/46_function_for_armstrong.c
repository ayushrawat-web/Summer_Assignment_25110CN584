#include<stdio.h>
int arms(int x)
{
    int d,sum=0;
    while(x>0)
    {
        d=x%10;
        sum=sum+d*d*d;
        x=x/10;
    }
    return(sum);

}
int main()
{
int n,result;
    printf("enter the no to check:");
    scanf("%d",&n);
    result=arms(n);
    if(n==result)
    {
        printf("entered number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }

    return 0;
}