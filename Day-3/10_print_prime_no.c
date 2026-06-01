#include<stdio.h>
int main()
{
    int n1,n2,i,j,prime;
    printf("enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    //range to print prime no
    for(i=n1;i<=n2;i++)
    {
        if(i<2)
        continue;
        prime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=0;   //no. is not prime
                break;
            }
        }
        if(prime==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
