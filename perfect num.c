//perfect num  or not
#include<stdio.h>
int main()
{
   int n,i,sum=0;
   printf("enter a number:");
   scanf("%d",&n);
   for(i=1;i<=n/2;i++)
   {
     if(n%i==0)
       sum+=i;
   }
   if(sum==n)
       printf("%d is a perfect num",n);
   else
      printf("%d is not a perfect num",n);
   return 0;
}
