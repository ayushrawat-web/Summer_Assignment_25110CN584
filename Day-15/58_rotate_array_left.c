//in left rotate all element is left shifted and first element is passed to last position 
#include<stdio.h>
int main()
{
    int a[50],n,i,temp;

    printf("enter the no of elements:");
    scanf("%d",&n);

    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    temp=a[0];

    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];

    }

    a[n-1]=temp;

    printf("the rotated array is ");
    for(i=0;i<n;i++)
    {
        
        printf("%d ",a[i]);

    }
;
    
return 0;
}