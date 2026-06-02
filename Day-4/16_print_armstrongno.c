#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,n,r,sum,armstrong,i;
    printf("enter ranges of no.");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        n=i;
        armstrong=n;
        sum=0;
        while(n!=0)
        {
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }
        if(sum==armstrong)
        {
            printf("%d ",sum);
        }
    }

    return 0;
}
