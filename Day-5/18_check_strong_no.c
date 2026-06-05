//strong no means sum of factorial of digit of a number is equal to digit
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,r,sum=0,fact,temp,i;
    printf("enter the no:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
    sum=sum+fact;
    n=n/10;    

    }
    if(temp==sum)
    {
        printf("n is a strong no");
    }
    else{
        printf("n is not a strong no");
    }
    
    return 0;
}
