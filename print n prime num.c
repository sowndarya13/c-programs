//to print N prime numbers
#include<stdio.h>
int main()
{
    int n,i,flag=0,num;
    printf("enter a number of prime num to be printed:");
    scanf("%d",&n);
    printf("thefirst %d prime num are:\n",n);
    for(i=2;flag<n;i++)
    {
        num=2;
        while(num<=i/2)
        {
            if(i%num==0)
                break;
            num++;
        }
        if(num==(i/2)+1)
        {
            printf("%d\n",i);
            flag++;
        }
    }
    return 0;
}
