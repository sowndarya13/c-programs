//to find if there is subarray(of size atleast 1) with sum 0
#include<stdio.h>
int main()
{
 int i,j,n,arr[100],sum;
 printf("enter the no. of elements in array:\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
 for(i=0;i<n;i++)
 {
   sum=0;
   for(j=i;j<n;j++)
   {
    sum+=arr[j];
    if(sum==0)
    {
      printf("true\nFrom %d to %d",i,j);
      break;
    }
   }
   if(sum==0)
      break;
 }
 if(sum!=0)
     printf("false\n");
 return 0;
 }
