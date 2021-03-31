//to find leap year
#include<stdio.h>
int main()
{
int n;
printf("enter a year:\n");
scanf("%d",&n);
if(n%4==0)
{
  if(n%100==0)
  {
      if(n%400==0)
         printf("the given year %d is leap year",n);
       else
        printf("not a leap year\n");
  }
  else
     printf("the given year %d is leap year",n);
}
else
  printf("the given year %d is not leap year\n",n);
return 0;
}
