//squareroot of a number
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double precision=0.00001,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i*i<=n;i++);
    for(--i;i*i<n;i+=precision);
    printf("square root of %d is %lf\n",n,i);
    return 0;
}
