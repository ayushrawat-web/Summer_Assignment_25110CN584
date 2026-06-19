#include<stdio.h>
int main()
{
int a[20][20],m,n,i,j,sum=0;

printf("enter the rows and column:\n");
scanf("%d%d",&m,&n);

printf("enter the elements of matrix:\n");
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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
}   

printf("the sum of diagonal elements : %d",sum);

return 0;
}