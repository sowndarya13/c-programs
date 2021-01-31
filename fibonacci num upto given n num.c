//fibonacci sequence upto specified num
#include<stdio.h>
int main()
{
    int n,n1=-1,n2=1,i,temp=0;
    printf("enter no. upto which fibonacci have to be printed:");
    scanf("%d",&n);
    printf("fibonacci sequence:");
    for(;;)
    {
        temp=n1+n2;
        n1=n2;
        n2=temp;
        if(temp>n)
           break;
         printf("%d ",temp);
    }
    return 0;
    
}
