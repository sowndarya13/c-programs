//simple interest
#include <stdio.h>

int main()
{
   int p;
   float n,r,si;
   printf("enter principal ,no_of_years and rate of interest:\n");
   scanf("%d%f%f",&p,&n,&r);
   si=(p*n*r)/100;
   printf("the simple interest is %f",si);
   
}
