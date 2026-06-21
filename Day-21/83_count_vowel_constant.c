#include<stdio.h>
int main()
{
    char str[50];
    int i,constant=0,vowel=0;

    printf("enter the string elements:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
                ||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'||str[i]=='I')
                {
                    vowel++;
                }
                    else
                    {
                        constant++;
                    }
                
        }
    }   
    
    printf("the no of vowels in the string is %d\n",vowel);
    printf("the no of constants in the string is %d",constant);
    
    
    return 0;
}
