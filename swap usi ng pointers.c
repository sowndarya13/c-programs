//swap using pointers
#include<stdio.h>
int main()
{
    int*a,*b,a1,b1,temp;
    printf("enter two num:");
    scanf("%d%d",&a1,&b1);
    a=&a1;
    b=&b1;
    printf("values before swap:\n*a=%d,*b=%d\n",*a,*b);
    temp=*a;
    *a=*b;
    *b=temp;
    printf("values after swap:\n*a=%d,*b=%d",*a,*b);
    return 0;
}
