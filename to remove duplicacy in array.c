//to remove duplicates in array
#include<stdio.h>
int main()
{
  int arr[100],i,temp,j,n;
  printf("enter no. of elements in array:\n");
  scanf("%d",&n);
  printf("enter the array elements:\n");
  for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
  for(i=0;i<n-1;i++)
  {
  for(j=0;j<n-1;j++)
  {
   if(arr[j]>=arr[j+1])
   {
   temp=arr[j];
   arr[j]=arr[j+1];
   arr[j+1]=temp;
   }
  }
  }
  printf("The actual array:\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  j=0;
  for(i=0;i<n-1;i++)
  {
   if(arr[i]!=arr[i+1])
     arr[j++]=arr[i];
  }
  arr[j++]=arr[n-1];
  printf("the array without duplicacy:\n");
  for(i=0;i<j;i++)
    printf("%d ",arr[i]);
 return 0;
}
