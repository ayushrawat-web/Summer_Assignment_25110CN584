#include<stdio.h>
int main()
{
    int n,i,a[20],largest,secondlar=0;
    printf("enter no of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }

    secondlar=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>secondlar && a[i]<largest)
        {
            secondlar=a[i];
        }
    }
    printf("the second largest element is %d",secondlar);

    return 0;
}