#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("enter the no:");
    scanf("%d",&n);
    printf("factors of n are ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}
