//print first n even numbers
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",2*i);
        i++;
    }
    return 0;
}
