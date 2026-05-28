#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,sum=0;
    printf("enter no you want to add upto that no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum upto n is %d",sum);
    return 0;
}
