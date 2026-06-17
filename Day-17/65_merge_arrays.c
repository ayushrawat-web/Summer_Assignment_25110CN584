#include<stdio.h>
int main()
{
   int a[50],b[50],c[50],n1,n2,i;
   printf("enter the no of elements of array a:");
   scanf("%d",&n1);

   printf("enter the array elements of array a:\n");
   for(i=0;i<n1;i++)
   {
    scanf("%d",&a[i]);
   }
  
   printf("enter the no of elements of array b:");
   scanf("%d",&n2);

    printf("enter the array elements of array b:\n");
   for(i=0;i<n2;i++)
   {
    scanf("%d",&b[i]);
   }

   for(i=0;i<n1;i++)
   {
    c[i]=a[i];
   }

    for(i=0;i<n2;i++)
   {
    c[i+n1]=b[i];
   }

    printf("the merged array is:\n");
   for(i=0;i<n1+n2;i++)
   {
    printf("%d ",c[i]);
   }

    
    return 0;
}