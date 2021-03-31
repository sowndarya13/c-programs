//to find starting and end position of the first sub-array whose addition is equal to given sum
#include<stdio.h>
int main()
{
 int arr[100],n,i,sum1,j,sum=0;
 printf("enter the no. of elements in array:\n");
 scanf("%d",&n);
 printf("enter array elements of +ve integer:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("enter the value of sum:\n");
scanf("%d",&sum1);
printf("the given array:\n");
for(i=0;i<n;i++)
   printf("%d ",arr[i]);
for(i=0;i<n;i++)
{
  sum+=arr[i];
  for(j=i+1;j<n;j++)
  {
     sum+=arr[j];
     if(sum==sum1)
     {
       printf("\nThe sub array start and end index whose addition equals given sum is %d and %d",i+1,j+1);
       break;
     }
  }
  if(sum==sum1)
      break;
  sum=0;
}
if(sum==0)
    printf("there is no sub array whose addition equals the sum\n");
 return 0;
}
