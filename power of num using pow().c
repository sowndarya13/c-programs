//power of num using built in func
#include<stdio.h>
#include<math.h>
int main()
{
    int base,expo;
    float result=1;
    printf("enter the base and exponent:");
    scanf("%d%d",&base,&expo);
    result=pow(base,expo);
    printf("the value of %d^%d is %.f",base,expo,result);
    return 0;
}
