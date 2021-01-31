//power of num
#include<stdio.h>
int main()
{
    int base,expo,expo1;
    float result=1;
    printf("enter the base and exponent:");
    scanf("%d%d",&base,&expo);
    expo1=expo;
    while(expo)
    {
        result*=base;
        expo--;
    }
    printf("the value of %d^%d is %.f",base,expo1,result);
    return 0;
}
