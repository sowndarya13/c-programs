//accept num and sum of digits "with using modulus"
#include <stdio.h>
int main()
{
int sum=0,num,rem;
printf("enter an integer:");
scanf("%d",&num);
while(num!=0)
{
    rem=num%10;
    sum+=rem;
    num/=10;
}
printf("sum of digits is %d",sum);
return 0;
}

