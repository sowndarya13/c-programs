//to get three num and print in descending order without using array
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the 3 nos.:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>=b)
{
  printf("%d,",a);
  if(b>=c)
     printf("%d,%d",b,c);
  else
    printf("%d,%d",c,b);
}
else if(b>=a)
{
 printf("%d,",b);
 if(a>=c)
  printf("%d,%d",a,c);
 else
  printf("%d,%d",c,a);
}
else if(c>=a)
{
 printf("%d,",c);
 if(a>=b)
  printf("%d,%d",a,b);
 else
  printf("%d,%d",b,a);
}
return 0;
}
