#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],m,n,i,j;

    printf("enter the rows and column:\n");
    scanf("%d%d",&m,&n);

    printf("enter the A matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[i][j]);
             }
          printf("\n");   
    }

    printf("enter the B matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("the sum of matrix A and B is: \n");
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}