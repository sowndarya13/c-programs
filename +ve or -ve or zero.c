//the no. is +ve ,-ve or 0
#include<stdio.h>
int main()
{
   int a;
   printf("enter a no.:\n");
   scanf("%d",&a);
   printf("the number %d is ",a);
   if(a>0)
      printf("positive");
    else if(a<0)
      printf("negative");
    else
      printf("zero");
   return 0;
}
