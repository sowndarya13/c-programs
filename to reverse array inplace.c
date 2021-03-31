//reverse an array inplace
#include<stdio.h>
int main()
{
int n,arr1[100],i,temp;
printf("enter no. of elements in array:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
   scanf("%d",&arr1[i]);
for(i=0;i<n/2;i++)
{
temp=arr1[i];
 arr1[i]=arr1[n-i-1];
 arr1[n-i-1]=temp;
}
printf("the revesed array is ");
for(i=0;i<n;i++)
  printf("%d ",arr1[i]);
return 0;
}
