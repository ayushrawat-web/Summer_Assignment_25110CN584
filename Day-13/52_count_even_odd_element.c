#include<stdio.h>
int main()
{
    int a[20],n,i,evencount=0,oddcount=0;
    printf("enter the no elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("even elements are %d\n",evencount);
    printf("odd elements are %d",oddcount);

    return 0;
}