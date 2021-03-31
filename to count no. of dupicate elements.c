//count no. of duplicates in array
#include<stdio.h>
int main()
{
int arr[100],i,count=0,n,j=0;
printf("enter the no. of elements in array\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(arr[i]==arr[j])
  {
    count++;
    break;
  }
 }
}
if(count==0)
   printf("there is no duplicate elements\n");
else
 printf("the no. of duplicate elements is %d",count);
return 0;
}
