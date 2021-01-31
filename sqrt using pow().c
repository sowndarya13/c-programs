//squareroot of a number using pow()
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("square root of %d is %lf\n",n,pow(n,0.5));
    return 0;
}
