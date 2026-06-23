#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],temp;
    int i,j;

    printf("enter the first string elements:");
    gets(a);

    printf("enter the second string elements:");
    gets(b);

    if(strlen(a)!=strlen(b))
    {
        printf("string is not a anagram string");
        return 0;
    }
    
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }

        for(i=0;b[i]!='\0';i++)
    {
        for(j=i+1;b[j]!='\0';j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
        }
    }

    if(strcmp(a,b)==0)
    {
        printf("the strings are anagram");
    }
    else
    printf("the strings are not anagram");

    return 0;
}