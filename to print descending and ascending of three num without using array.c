//to get three num and print in descending order without using array
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the 3 nos.:\n");
scanf("%d%d%d",&a,&b,&c);
printf("the descending order:");
if(a==b==c)
{
    printf("%d,%d,%d\n",a,b,c);
    printf("the ascending order:%d,%d,%d\n",a,b,c);
}
else if(a>b)
{
  printf("%d,",a);
  if(b>=c)
  {
     printf("%d,%d\n",b,c);
     printf("the ascending order:%d,%d,%d\n",c,b,a);
  }
  else
  {
    printf("%d,%d\n",c,b);
     printf("the ascending order:%d,%d,%d\n",b,c,a);
  }
}
else if(b>a)
{
 printf("%d,",b);
 if(a>=c)
    {
    printf("%d,%d\n",a,c);
     printf("the ascending order:%d,%d,%d\n",c,a,b);
  }
 else
 {
    printf("%d,%d\n",c,a);
     printf("the ascending order:%d,%d,%d\n",a,c,b);
  }
}
else if(c>a)
{
 printf("%d,",c);
 if(a>=b)
    {
    printf("%d,%d\n",a,b);
     printf("the ascending order:%d,%d,%d\n",b,a,c);
  }
 else
 {
    printf("%d,%d\n",b,a);
     printf("the ascending order:%d,%d,%d\n",a,b,c);
  }
}
return 0;
}
