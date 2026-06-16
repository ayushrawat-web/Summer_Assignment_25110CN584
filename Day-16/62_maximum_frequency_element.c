#include<stdio.h>
int main()
{
int a[50],n,i,j,maxfreq=0,element,count;

printf("enter the no of elements:");
scanf("%d",&n);

printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    count=0;
    
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }

    if(count>maxfreq)
    {
        maxfreq=count;
        element=a[i];

    }

   

}

printf("maxfrequency element is %d\n",element);
printf("frequency of maxfrequency is %d",maxfreq);

return 0;
}