#include<stdio.h>
int main()
{
int a[50],n,i,appsum=0,actsum=0,missno;

printf("enter the no of elements:");
scanf("%d",&n);

printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=1;i<=n+1;i++)
{
    appsum=appsum+i;
}

for(i=0;i<n;i++)
{
    actsum=actsum+a[i];
}

missno=appsum-actsum;
printf("missing no is %d",missno);
return 0;
}