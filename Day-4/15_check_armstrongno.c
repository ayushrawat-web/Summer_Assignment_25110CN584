#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0,digit,temp;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;

    }
    if(temp==sum)
    {
printf("n is a armstrong no.");
    }
    else{
        printf("n is not a armstrong no.");
    }
    return 0;
}
