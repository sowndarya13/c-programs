//square of n num
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no. of integer for which square to be calculated:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("the square of %d is %d\n",i,i*i);
    }
    return 0;
    
}
