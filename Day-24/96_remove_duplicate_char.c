#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i,j,k=0,flag;

    printf("enter the string elements:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        flag=0;
    for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
        {
            b[k]=a[i];
            k++;
        }

    }

    b[k]='\0';

printf("the removed duplicate character string is %s",b);

    return 0;
}