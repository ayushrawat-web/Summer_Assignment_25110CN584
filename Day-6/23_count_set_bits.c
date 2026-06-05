#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0;
    printf("enter the no n:");
    scanf("%d",&n);
    while (n>0)
    
    {
        if(n & 1)
        {
            count++;
        }
        
        n=n>>1;
    }
    printf("the no of set bits are:%d",count);
    
    
    return 0;
}
