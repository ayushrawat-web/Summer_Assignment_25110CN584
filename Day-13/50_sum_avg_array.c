#include<stdio.h>
int main()
{
    int n,a[20],i,sum=0,avg;
    printf("enter the no of elements:");
    scanf("%d",&n);

    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    ;
    }
    avg=(float)sum/n;
    
    printf("array sum is %d\n",sum);
    printf("array avg is %d",avg);
    
    return 0;
}