#include<stdio.h>
int main()
{
    char str[50];
    int i;

    printf("enter the string elements :");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        i++;
    }

    printf("%d",i);

    return 0;
}
