//to add digit using recursion
#include<stdio.h>
int recurse(int);
int sum=0,rem;
int main()
{
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
   printf("%d",recurse(n));
    return 0;
}
int recurse(int n)
{
    if(n)
    {
        rem=n%10;
        sum+=rem;
        recurse(n/10);
    }
    else
      return sum;
}
