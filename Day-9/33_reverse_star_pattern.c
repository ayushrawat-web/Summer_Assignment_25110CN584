#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
