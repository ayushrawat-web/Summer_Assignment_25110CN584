#include<stdio.h>
int main()
{
    int n,i,a[20],x,flag=0;
    printf("enter no of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the element to search:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
    printf("the searced element is at position of %d",i+1);
    }
    else
    {
        printf("not found");
    }


    return 0;
}