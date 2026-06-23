#include<stdio.h>
int main()
{
    char a[20];
    int i,j,count;

    printf("enter the string elements:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        count=0;
        for(j=0;a[j]!='\0';j++)
        {
            if (a[i]==a[j])
            {
                 count++;
               
             }
            
        }
        if(count==1)
        {
           printf("the first non repeating elements is %c",a[i]);
           break;
        }
        
    }

    return 0;
}