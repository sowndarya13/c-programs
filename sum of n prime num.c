//sum of n prime  num
#include<stdio.h>
int main()
{
    int n,i,flag=1,j=2,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;flag<=n;i++)
    {
      for(j=2;j<=i/2;j++)
     {
         if(i%j==0)
         {
           break;
         }
     }
     if(j==(i/2)+1)
      {
         sum+=i;
         flag++;
      }
    }
    printf("%d",sum);
   return 0;
}
