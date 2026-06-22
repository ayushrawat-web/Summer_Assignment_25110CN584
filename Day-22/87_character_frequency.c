#include<stdio.h>
int main()
{
    char a[20],ch;
    int i,count=0;
    
    printf("enter the string elements:");
    gets(a);

    printf("enter the character to check frequency:");
    scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        {
            count++;
        }
    }

    printf("frequency of character is %d",count);

    return 0;
}