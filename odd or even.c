//odd or even
#include<stdio.h>
int main()
{
   int a;
   printf("enter a no.:\n");
   scanf("%d",&a);
   printf("the number %d is ",a);
   if(a%2==0)
      printf("even");
    else
      printf("odd");
   return 0;
}
