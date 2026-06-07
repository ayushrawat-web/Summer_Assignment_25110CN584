#include<stdio.h>
int rev(int);
int main(int argc, char const *argv[])
{
int n,result;
printf("enter the no you want to reverse:");
scanf("%d",&n);
printf("reverse of n is %d",rev(n));
    
return 0;
}
int rev(int n)
{
    int d,result=0;
    while(n>0){
        d=n%10;
        result=result*10+d;
        n=n/10;
        }
        return(result);
   
}
