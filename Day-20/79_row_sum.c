#include<stdio.h>
int main()
{
    int a[20][20],m,n,i,j,sum;

    printf("Enter the order of matrix A:");
    scanf("%d%d",&m,&n);

    printf("Enter matrix elements:\n");
     for(i=0;i<m;i++)
        {
         for(j=0;j<n;j++)
         {
            scanf("%d",&a[i][j]);
             }
    }

    for(i=0;i<m;i++)
    {
         sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
         
        printf("the sum of row %d is %d\n",i+1,sum);
    }

    return 0;
}