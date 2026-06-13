#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter elements in array:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    printf("array elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}