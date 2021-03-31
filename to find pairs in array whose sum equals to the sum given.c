#include<stdio.h>
int main()
{
int arr[100],i,j,sum,n,flag=0;
printf("enter the no. of elements in array:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
printf("enter the value of sum:\n");
scanf("%d",&sum);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
 if(arr[i]+arr[j]==sum)
 {
   flag=1;
   printf("(%d,%d) ",arr[i],arr[j]);
}
}
}
if(flag==0)
  printf("there is no pair of integers to make sum of %d\n",sum);
else
  printf("are/is the pairs that make a sum of %d",sum);
return 0;
}
