#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,rev=0,temp,digit;
printf("enter the number to check:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
}
if(temp==rev)
{
    printf("number is palindrome");
}
else{
    printf("not palindrome");
}
    return 0;
}
