#include<stdio.h>
int main()
{
int a[20][20],b[20][20],m,n,i,j;

printf("enter the order of matrix\n");
scanf("%d%d",&m,&n);

printf("enter the A matrix\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        b[j][i]=a[i][j];
    }
}

printf("transpose of matrix A is:\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
}


return 0;
}