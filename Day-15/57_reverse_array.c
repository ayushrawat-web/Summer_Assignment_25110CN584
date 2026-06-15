//in reverse all elements are reversed
#include<stdio.h>
int main()
{
    int a[50],b[50],n,i,j;

    printf("enter the no of element:");
    scanf("%d",&n);

    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //print last element of a in b from initial
    j=0;
    for(i=n-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;

    }
    
    printf("the reverse array is\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",b[j]);
    }


    return 0;
}