#include<stdio.h>
int main()
{
    char a[20];
    int max=0,i,j,count;
    char charmax;

    printf("enter the elements of string:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
    count=1;
      for(j=i+1;a[j]!='\0';j++)
         {
            if(a[i]==a[j])
            {
                count++;     
            }
        }
     if(count>max)
     {
        max=count;
        charmax=a[i];
        }
    }

    printf("max repeating char is %c\n",charmax);
    printf("the frequency of max repeating char is %d",max);

    return 0;
}