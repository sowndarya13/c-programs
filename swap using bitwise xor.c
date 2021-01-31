#include<stdio.h>
int main()
{
    int a=5,b=10;
    printf("values before swap:\na= %d,b=%d\n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("values after swap:\na= %d,b=%d\n",a,b);
    return 0;
}
