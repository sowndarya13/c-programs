//neon num or not
#include<stdio.h>
int main()
{
   int n,sum=0,n2,rem;
   printf("enter a number:");
   scanf("%d",&n);
   n2=n*n;
   while(n2!=0)
   {
     rem=n2%10;
     sum+=rem;
     n2/=10;
   }
   if(n==sum)
       printf("%d is neon num",n);
   else
      printf("%d is not neon",n);
   return 0;
}
