#include<stdio.h>
int main()
{
    char str[50];
    int i,length=0;

    printf("enter the elements of string:");
    gets(str);
    
    while(str[length]!='\0')
    {
        length++;
    }

    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
    
    return 0;
}
