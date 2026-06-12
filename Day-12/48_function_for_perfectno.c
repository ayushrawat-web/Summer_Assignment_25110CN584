//perfect are the no which are equal to the sum of factors of the no
#include<stdio.h>
int perfect(int x)
{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
       if(x%i==0)
       {
         sum=sum+i;
       }
    }
    return(sum);
 
}
int main()
{
    int n,result;
    printf("enter the no to check:");
    scanf("%d",&n);
    result=perfect(n);
    if(result==n)
    {
        printf("n is a perfect number");

    }
    else
    {
        printf("n is not a perfect number");
    }
    
    return 0;
}
