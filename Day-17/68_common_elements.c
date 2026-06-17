#include<stdio.h>
int main()
{
    int a[50],b[50],n1,n2,i,j;
    
    printf("enter the no of elements of array a:");
    scanf("%d",&n1);

    printf("enter the elements of array a:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the no of elements of array b:");
    scanf("%d",&n2);

    printf("enter the elements of array b:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("common elements in the arrays :\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                
            }
        }
    }

    return 0;
}