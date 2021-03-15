//lcm of two numbers
#include<stdio.h>
int main()
{
    int a,b,i,gcd,lcm;
    printf("enter two num:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
          gcd=i;
    }
    lcm=(a*b)/gcd;
    printf("lcm of two numbers is %d",lcm);
    return 0;
}
