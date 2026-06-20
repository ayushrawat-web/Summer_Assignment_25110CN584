#include<stdio.h>
int main()
{
   int a[20][20],b[20][20],c[20][20],m,n,p,q,i,j,k ;

   printf("enter the rows and column of A matrix:\n");
   scanf("%d%d",&m,&n);

    printf("enter the rows and column of B matrix:\m");
   scanf("%d%d",&p,&q);

   printf("enter elements of A matrix\n");
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }

   printf("enter elements of B matrix\n");
    for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
     {
        scanf("%d",&b[i][j]);
        }
   }

   for(i=0;i<m;i++)
   {
    for(j=0;j<p;j++)
    {
        c[i][j]=0;
        for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][j]*b[i][j];
             }
        }
   }

     printf("the resultant matrix is=\n");
    for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
     {
        printf(" %d",c[i][j]);
        }
        printf("\n");
   }

       return 0;
}