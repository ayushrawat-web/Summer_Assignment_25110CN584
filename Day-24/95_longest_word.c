#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i,len=0;
    int max=0,start=0,maxstart=0;

    printf("enter the string elements:");
    gets(a);

    for(i=0;;i++)
    {
        if(a[i]!=' ' && a[i]!='\0')
        {
            len++;
        }
        else
        {
            if(len>max)
            {
            max=len;
            maxstart=start;
            }

            len=0;
            start=i+1;
        }
        if(a[i]=='\0')
        {
            break;
        }

    }
      
    printf("longest word is:");
    for(i=maxstart;i<maxstart+max;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}