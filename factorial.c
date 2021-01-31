//print tables of a given num
#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("enter a number for which u want to print factorial:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("the factorial of the num is %d",fact);
    return 0;
}
