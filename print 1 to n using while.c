//print 1 to n using while loop
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a number upto which you want to print");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
