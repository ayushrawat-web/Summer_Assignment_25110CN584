#include<stdio.h>
int main()
{
    char a[20];
    int i,j;
    
    printf("enter the string elements:");
    gets(a);

    j=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            a[j]=a[i];
            j++;
        }
        
    }
    
    a[j]='\0';

    printf("the removed spaces array is %s",a);

    return 0;
}