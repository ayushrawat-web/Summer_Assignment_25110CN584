#include<stdio.h>
int main()
{
    int n,i,a[20],x,count=0;
    printf("enter no of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter the element to know frequency:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            count++;
        }
    }
    printf("the frequency of %d is %d",x,count);
    return 0;
}