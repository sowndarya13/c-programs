//print tables of a given num
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a number for which u want to print tables:");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}
