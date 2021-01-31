//print n to 1 using do..while
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a num:");
    scanf("%d",&n);
    printf("the num from %d to 1:\n",n);
    i=n;
    do
    {
     printf("%d ",i);
     i--;
    }while(i>=1);
    return 0;
}
