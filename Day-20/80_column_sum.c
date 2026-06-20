#include<stdio.h>
int main()
{
    int a[20][20],m,n,i,j,sum;

    printf("Enter the order of matrix A:\n");
    scanf("%d%d",&m,&n);

    printf("Enter matrix elements:\n");
     for(i=0;i<m;i++)
        {
         for(j=0;j<n;j++)
         {
            scanf("%d",&a[i][j]);
             }
    }

    for(j=0;j<n;j++)
    {
         sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
         
        printf("the sum of column %d is %d\n",j+1,sum);
    }

    return 0;
}