#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,sum=0;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("it is a perfect no");
    }
    else{
        printf("not a perfect no");
    }
    return 0;
}
