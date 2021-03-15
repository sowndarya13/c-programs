//merge two arrays of same size in descending order
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int arr1[100],arr2[100],n1,n2,i,j=0,temp;
 printf("enter the no. of elements in array 1 and 2:");
 scanf("%d%d",&n1,&n2);
 if(n1!=n2)
 {
 printf("array 1 nd 2 of different size");
 exit(1);
 }
 else
 {
  printf("enter arr1 and arr2 elements:\n");
  for(i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
  for(i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
  for(i=n1;i<(n1+n2);i++)
  {
   arr1[i]=arr2[j];
   j++;
  }
  for(i=0;i<n1+n2;i++)
  {
  for(j=0;j<n1+n2-1;j++)
  {
  if(arr1[j]<=arr1[j+1])
  {
   temp=arr1[j];
   arr1[j]=arr1[j+1];
   arr1[j+1]=temp;
  }
  }
  }
 }
 for(i=0;i<n1+n2;i++)
    printf("%d",arr1[i]);
return 0;
}
