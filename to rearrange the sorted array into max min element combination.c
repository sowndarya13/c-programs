//to rearrange the sorted array into max min element combination
#include<stdio.h>
int main()
{
 int i,n,arr[100],temp,k;
 printf("enter the no. of elements:\n");
 scanf("%d",&n);
 printf("enter the array elements in ascending sorted order:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 for(i=0;i<n;i=i+2)
 {
    temp=arr[n-1];
    for(k=n-1;k>i;k--)
   {
     arr[k]=arr[k-1];
   }
   arr[i]=temp;
 }
 printf("after rearrange the array:\n");
 for(i=0;i<n;i++)
   printf("%d ",arr[i]);
 return 0;
}
