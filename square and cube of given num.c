//square and cube
#include<stdio.h>
#include<math.h>
int main()
{
   int a;
   printf("enter a no. for which square and cube has to be found out:\n");
   scanf("%d",&a);
   printf("the square and cube of %d is %.lf and %.lf respectively",a,pow(a,2),pow(a,3));//note:pow() returns double data type value
   
}
