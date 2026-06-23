#include<stdio.h>
int main()
{
    char a[20];
    int count=0,i,j;

    printf("enter the string elements:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
            printf("first repeating character is %c",a[i]);
            count++;
            break;
            }
        }
        if(count>0)
        {
            break;
        }
    }

    if(count==0)
    {
        printf("it has no repeating character");
    }

    return 0;
}