//to find whether the given element is in each segment of array
#include<stdio.h>
int main()
{
 int arr[100],n,i,j,key,k,flag=0;
 printf("enter no. of element in array:\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 printf("enter the segment value:\n");
 scanf("%d",&k);
 printf("enter the no. to be found in each segment:\n");
 scanf("%d",&key);
 for(i=0;i<n;i=i+k)
 {
  if(i+k<=n)
     flag=0;
  for(j=i;(j<(i+k))&&((i+k)<=n);j++)
  {
    if(arr[j]==key)
    {
      flag=1;
      break;
    }
  }
  if(flag!=1)
    break;
}
if(flag==1)
  printf("yes\n");
else
  printf("No\n");
return 0;
}
