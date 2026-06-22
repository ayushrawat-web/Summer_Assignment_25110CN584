#include<stdio.h>
int main()
{
    char a[20];
    int count=0,i;
    
    printf("enter the string elements:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }

    printf("the no of words are %d",count+1);    

    return 0;
}