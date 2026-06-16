#include<stdio.h>
int main()
{
int a[50],b[50],n,i,j,k=0,flag;

printf("enter the no of elements:");
scanf("%d",&n);

printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    flag=0;
    for(j=0;j<k;j++)
    {
        if(a[i]==b[j])
        {
         flag=1; 
         break;  
        }
    }
    if(flag==0)
    {
        b[k]=a[i];
        k++;
    }
}

printf("the non duplicated array is \n");
for(i=0;i<k;i++)
{
printf("%d ",b[i]);
}

return 0;
}