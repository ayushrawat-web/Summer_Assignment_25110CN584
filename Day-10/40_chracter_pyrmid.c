#include<stdio.h>
int main()
{
    int n,i,j,space;
    printf("enter the no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=(n-i);space++)
        {
                printf(" ");
         }
         for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        for(j=i-1;j>=1;j--)
        {

            printf("%c",64+j);
        }
        printf("\n");
    }
    
    return 0;
}
