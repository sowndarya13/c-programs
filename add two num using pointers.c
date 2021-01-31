//add two num using pointers
#include<stdio.h>
int main()
{
    int*a,*b,a1,b1,temp;
    printf("enter two num:");
    scanf("%d%d",&a1,&b1);
    a=&a1;
    b=&b1;
    printf("sum of two num %d and %d is %d",*a,*b,*a+*b);
    return 0;
}
