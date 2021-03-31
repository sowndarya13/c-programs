#include<stdio.h>
int main()
{
    int n,i=1;
    long long int fact=1;
    printf("enter a number for which u want to print factorial:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("the factorial of the num is %lld",fact);
    return 0;
}
