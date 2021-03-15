#include<stdio.h>
int main()
{
int n,k,i;
printf("enter the decimal num:");
scanf("%d",&n);
printf("the corresponding binary num is ");
for(i=31;i>=0;i--)
{
k=n>>i;
if(k&1)
 printf("1");
else
  printf("0");
}
return 0;
}

