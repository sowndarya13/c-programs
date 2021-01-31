//To check the num is armstrong or not (for n digit num)
#include <stdio.h>
#include<math.h>
int main()
{
int num,rem,originalnum,i=0,n;
float result=0.0;
printf("enter an integer:");
scanf("%d",&num);
originalnum=n=num;
while(num!=0)
{
  num/=10;
  i++;
}
while(n!=0)
{
    rem=n%10;
    result+=(pow(rem,i));
    n/=10;
}
if(originalnum==(int)result)
   printf("the given num %d is armstrong",originalnum);
else
   printf("the given num %d is not armstrong",originalnum);
return 0;
}


