#include<stdio.h>
int prime(int x)
{
    int i;
    if(x<=1)
    {
        return(0);
    }
    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            return(0);
        }
    }
    
        if(x%i!=0)
        {
            return(1);
        }
    }



int main()
{
 int n,check;
 printf("enter the no to check:");
 scanf("%d",&n);
 check=prime(n);
 if(check==1)
 {
    printf("n is prime");
 }
 if(check==0)
 {
    printf("n is not prime");
 }
 
   
    return 0;
}