#include<stdio.h>
int main()
{
    int a[50],n,i,j=0;
    printf("enter the no of elements:");
    scanf("%d",&n);

    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            {
            a[j]=a[i];
            j++;
            }
    }

    while(j<n)
    {
        a[j]=0;
        j++;
    }
    
    printf("the new array is" );
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
return 0;
}