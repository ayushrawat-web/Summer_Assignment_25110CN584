#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;

    printf("enter the no of array elements:");
    scanf("%d",&n);

    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("the decending order array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}