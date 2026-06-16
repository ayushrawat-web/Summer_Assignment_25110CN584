#include<stdio.h>
int main()
{ 
int a[50],n,i,sum,j;

printf("enter the sum:");
scanf("%d",&sum);

printf("enter the no of elements:");
scanf("%d",&n);

printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(sum==a[i]+a[j])
        {
            printf("(%d,%d) is a pair of sum\n",a[i],a[j]);
        }
    }
}

return 0;
}