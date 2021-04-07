//to display the wealth that the richest customer has
#include<stdio.h>
int main()
{
  int account[100][100],cus,bank,i,j;
  long long int maxwealth=0,sum;
  printf("enter the total no. of customers:\n");
  scanf("%d",&cus);
  printf("enter the total no. of bank:\n");
  scanf("%d",&bank);
  for(i=0;i<cus;i++)
  {
    printf("enter the customer%d wealth in %d banks\n",i+1,bank);
    for(j=0;j<bank;j++)
      scanf("%d",&account[i][j]);
  }
  for(i=0;i<cus;i++)
  {
  sum=0;
   for(j=0;j<bank;j++)
     sum+=account[i][j];
   if(sum>maxwealth)
     maxwealth=sum;
  }
  printf("The wealth of richest customer is %lld\n",maxwealth);
  return 0;
}
