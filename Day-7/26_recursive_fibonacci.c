#include<stdio.h>
int fibonacci(int);
int main(int argc, char const *argv[])
{
    int n,i;
    printf("enter the no of term:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",fibonacci(i));
    }

    return 0;
}
int fibonacci(int i)
{
if(i==0)
{
    return(0);
}
if(i==1){
    return(1);
}
else{
    return(fibonacci(i-1)+fibonacci(i-2));
}

}