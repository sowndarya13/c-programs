//niven or harshad num or not
#include<stdio.h>
int main()
{
   int n,sum=0,rem,n2;
   printf("enter a natural number:");
   scanf("%d",&n);
   n2=n;
   while(n!=0)
   {
     rem=n%10;
     sum+=rem;
     n/=10;
   }
   if(n2%sum==0)
       printf("%d is harshad num",n2);
   else
      printf("%d is not harshad num",n2);
   return 0;
}
