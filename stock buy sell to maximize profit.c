//stock buy sell to maximize profit(can buy and sell for many times if profit occurs)
#include<stdio.h>
int maximumprofit(int prices[],int n)
{
  int i,j,profit=0,sum=0,flag;
  for(i=0;i<n-1;i++)
  {
    flag=0;
    for(j=i+1;j<n;j++)
    {
      if(prices[j]<prices[i])
      {
        i=j-1;
        break;
      }
      if(prices[j]-prices[i]>profit)
      {
            flag=1;
            profit=prices[j]-prices[i];
      }
    }
    if(flag==1)
       sum+=profit;
  }
  return sum;
}
int main()
{
 int n,i,max;
 printf("enter no. of days in array:\n");
 scanf("%d",&n);
 int prices[n];
 printf("enter cost of stock on each day:\n");
 for(i=0;i<n;i++)
   scanf("%d",&prices[i]);
 if(max=maximumprofit(prices,n))
     printf("the max profit is %d",max);
 else
   printf("profit can't be earned\n");
  return 0;
}
