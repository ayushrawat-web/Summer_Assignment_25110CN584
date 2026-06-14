#include<stdio.h>
int main()
{
    int n,i,a[20],j;
    printf("enter no of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("duplicate element is %d\n",a[j]);
                break;
            }
            
        }
    }





    return 0;
}