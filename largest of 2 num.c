//largest of two num
#include<stdio.h>
int main()
{
   int a,b;
   printf("enter two nos.:\n");
   scanf("%d%d",&a,&b);
   printf("the largest num among %d and %d is ",a,b);
   if(a>b)
     printf("%d",a);
    else
      printf("%d",b);
   return 0;
}

