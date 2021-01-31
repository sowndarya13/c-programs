//to print 1 to N prime numbers
#include<stdio.h>
int main()
{
    int n,i,num;
    printf("enter a number upto which prime to be printed:");
    scanf("%d",&n);
    printf("The prime upto %d are:\n",n);
    for(i=2;i<=n;i++)
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
        }
    }
    return 0;
}
