#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,b[20],i=0,j;
    printf("enter the no you want to convert:");
    scanf("%d",&n);
    while(n>0)
    {
            b[i]=n%2;
            n=n/2;
            i++;

    }
    printf("binary number is:");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }
    
    
    return 0;
}
