#include<stdio.h>
 int main()
{
    int a,b,lcm,low;
    printf("enter no a and b:");
    scanf("%d%d",&a,&b);
    low=(a<b)?a:b;
    //lcm logic
    while(1)
    {
        if(low%a==0 && low%b==0){
        lcm=low;
        break;
    }
        low++;
    }
    printf("lcm of %d and %d is %d",a,b,lcm);
    return 0;
}
