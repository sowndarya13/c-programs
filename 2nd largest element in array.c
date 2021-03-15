//2nd largest element in array
#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[100],i,j,n,temp;
printf("enter the no. of elements in array:\n");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
for(i=0;i<n;i++)
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
    for(i=n-2;i>=0;i--)
    {
         if(arr[i]!=arr[i+1])
         {
           printf("the second largest element is %d",arr[i]);
           exit(1);
         }
    }
     if(i==-1)
       printf("no second largest number");
return 0;
}
