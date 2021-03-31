//to find first element in array whose all left elements are smaller and right elements are greater
#include<stdio.h>
int main()
{
 int arr[100],n,i,j,flag=0;
 printf("enter the no. of elements in array:\n");
 scanf("%d",&n);
 printf("enter array elements:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("the given array:\n");
for(i=0;i<n;i++)
   printf("%d ",arr[i]);
for(i=1;i<n-1;i++)
{
   flag=0;
  for(j=i+1;j<n;j++)
  {
    if(arr[j]<=arr[i])
    {
      flag=1;
      break;
    }
   }
   if(flag==0)
   {
     for(j=i-1;j>=0;j--)
     {
       if(arr[j]>=arr[i])
       {
         flag=1;
         break;
       }
     }
     if(flag==0)
     {
        printf("\nThe no. whose all left are small and all right are greater is %d",arr[i]);
        break;
     }
   }
 }
   if(flag!=0)
      printf("\nThere is no such element whose left are small and right are big\n");
   return 0;
}
