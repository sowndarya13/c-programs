//fibonacci sequence
#include<stdio.h>
int main()
{
    int n,n1=-1,n2=1,i,temp=0;
    printf("enter no. of fibonacci num have to be printed:");
    scanf("%d",&n);
    printf("fibonacci sequence:");
    for(i=0;i<n;i++)
    {
        temp=n1+n2;
        n1=n2;
        n2=temp;
        if(i==(n-1))
         printf("%d",temp);
        else
         printf("%d,",temp);
    }
    return 0;
    
}
