//palindrome num or not
#include<stdio.h>
int main()
{
   int n,sum=0,rem,n2,rev=0;
   printf("enter a number:");
   scanf("%d",&n);
   n2=n;
   while(n!=0)
   {
     rem=n%10;
     rev=rev*10+rem;
     n/=10;
   }
   if(n2==rev)
       printf("%d is a palindrome",n2);
   else
      printf("%d is not a palindrome",n2);
   return 0;
}
