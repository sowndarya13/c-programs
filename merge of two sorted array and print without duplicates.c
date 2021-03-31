//merge two sorted array and output without duplicates
#include<stdio.h>
int main()
{
 int arr1[100],arr2[100],arr[100],i,j,k=0,n1,n2;
 printf("enter no. of elements in array1 and array2:\n");
 scanf("%d%d",&n1,&n2);
 printf("enter array1 elements in sorted order:\n");
 for(i=0;i<n1;i++)
   scanf("%d",&arr1[i]);
printf("enter array2 elements in sorted order:\n");
for(i=0;i<n2;i++)
   scanf("%d",&arr2[i]);
i=0;
j=0;
k=0;
while(i<n1&&j<n2)
{
  if(arr1[i]<=arr2[j])
  {
    if(arr1[i]!=arr[k-1])
    {
      arr[k]=arr1[i];
      if(arr1[i]==arr2[j])
        j++;
       k++;
    }
    i++;
  }
  else
  {
   if(arr2[j]!=arr[k-1])
   {
   arr[k]=arr2[j];
   k++;
   }
   j++;
  }
}
while(i<n1)
{
 if(arr1[i]!=arr[k-1])
 {
 arr[k]=arr1[i];
 k++;
 }
 i++;
}
while(j<n2)
{
 if(arr2[j]!=arr[k-1])
 {
 arr[k]=arr2[j];
 k++;
 }
 j++;
}
printf("aftter merging:\n");
for(i=0;i<k;i++)
    printf("%d ",arr[i]);
return 0;
}
