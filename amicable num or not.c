#include <stdio.h>
int main()
{
    int n1,n2,sum1=0,sum2=0,i;
    printf("enter two integers:");
    scanf("%d%d",&n1,&n2);
    for(i=1;(i<=n1/2)||(i<=n2/2);i++)
    {
        if((n1%i==0)&&(i<=n1/2))
           sum1+=i;
        if((n2%i==0)&&(i<=n2/2))
           sum2+=i;
    }
    printf(" the sum of proper divisor of n1 and n2 is %d %d\n",sum1,sum2);
    if((n1==sum2)&&(n2==sum1))
        printf("the %d and %d are ambicable to each other",n1,n2);
    else
        printf("the %d and %d are not ambicable to each other",n1,n2);
    return 0;
}
