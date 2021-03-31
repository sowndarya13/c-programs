#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two integer:\n");
    scanf("%d%d",&a,&b);
    printf("values before swap:\na= %d,b=%d\n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("values after swap:\na= %d,b=%d\n",a,b);
    return 0;
}
