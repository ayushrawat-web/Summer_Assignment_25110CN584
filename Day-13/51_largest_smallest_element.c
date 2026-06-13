#include<stdio.h>
int main()
{
    int a[20],n,i,largest,smallest;
    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    largest=a[0];
    smallest=a[0];
    
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
       
    }
    printf("largest element is %d\n",largest);
    printf("smallest element is %d",smallest);

    return 0;
}