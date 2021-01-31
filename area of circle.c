//area of circle
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
   float r,area;
   printf("enter radius of circle:\n");
   scanf("%f",&r);
   area=pi*pow(r,2);
   printf("the area of circle is %f",area);
   
}
