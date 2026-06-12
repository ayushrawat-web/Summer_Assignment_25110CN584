 #include<stdio.h>
 int palin(int x)
 {
   int d,rev=0;
   while(x>0){
   d=x%10;
   rev=rev*10+d;
   x=x/10;
   
}
return(rev);

 }
 int main()
 {
    int n,result;
    printf("enter the no to check:");
    scanf("%d",&n);
   result=palin(n);
    if(result==n)
    {
      printf("entered number is palindrome");

    }
    else
    {
      printf("not palindrome");
    }

return 0;
 }