#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,t1=0,t2=1,t3,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("nth term is %d",t1);
    }
    else if(n==2)
    {
        printf("nth term is %d",t2);
    }
    else{
        for(i=3;i<=n;i++)
        {
            t3=t1+t2;
            t1=t2;
            t2=t3;
        }
        printf("nth term is %d",t3);
    }
    return 0;
}
