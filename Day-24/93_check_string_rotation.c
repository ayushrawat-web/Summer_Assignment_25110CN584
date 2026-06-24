#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],temp[40];
    

    printf("enter the string elements:");
    gets(a);

    printf("enter the string elements:");
    gets(b);

    if(strlen(a)!=strlen(b))
    {
        printf("it is not a rotation string");
    }

    strcpy(temp,a);
    strcat(temp,a);
    
    if(strstr(temp,b))
    {
        printf("it is a rotation string");
    }
    else
    printf("it is not a rotation string");

    return 0;
}