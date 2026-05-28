#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0;
    printf("enter number to count digit:");
    scanf("%d",&n);
   
    if(n==0){
        printf("there is only 1 digit in your number");
    }
    else{
         while(n!=0)
    {
        n=n/10;
        count++;
    }
printf("no of digit is %d",count);
    }
    
    return 0;
}
