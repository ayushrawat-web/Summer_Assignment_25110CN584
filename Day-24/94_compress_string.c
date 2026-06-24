#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i,j,count;

    printf("enter the string elements:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        count=1;
        while(a[i]==a[i+1])
        {
            count++;
            i++;
        }

        printf("%c%d",a[i],count);
    }
    
        return 0;
}