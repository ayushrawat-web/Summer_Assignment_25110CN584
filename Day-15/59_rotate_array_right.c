//in right rotate all element is right shifted and last element is passed to first position
#include<stdio.h>
int main()
{
    int a[50],n,i,temp;

    printf("enter the no of elements:");
    scanf("%d",&n);

    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    temp=a[n-1];
    
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }

     a[0]=temp;
    printf("right rotated array is ");
    for(i=0;i<n;i++)
    {
       
        printf("%d ",a[i]);

    }

return 0;
}