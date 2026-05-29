#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,product=1,digit;
    printf("enter the number to product digit:");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
    printf("product of digit is:%d",product);
    
    return 0;
}
