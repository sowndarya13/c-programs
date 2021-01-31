//accept num and reverse a number
#include <stdio.h>
int main()
{
int rev=0,num,rem;
printf("enter an integer:");
scanf("%d",&num);
while(num!=0)
{
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}
printf("the reversed num is %d",rev);
return 0;
}
