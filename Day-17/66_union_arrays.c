//in union arrays only unique element is printed
#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],n2,n1,i,j;
   printf("enter the no of elements of array a:");
   scanf("%d",&n1);

   printf("enter the array elements of array a:\n");
   for(i=0;i<n1;i++)
   {
    scanf("%d",&a[i]);
    c[i]=a[i];
   }

    printf("enter the no of elements of array b:");
    scanf("%d",&n2);

    printf("enter the array elements of array b:\n");
     for(i=0;i<n2;i++)
    {
     scanf("%d",&b[i]);
    }

    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(c[j]==b[i])
            {
                break;
            }
        }
        
    if(j==n1)
        {
            c[n1]=b[i];
            n1++;
        }
    }

    printf("union of arrays : ");
    for(i=0;i<n1;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}