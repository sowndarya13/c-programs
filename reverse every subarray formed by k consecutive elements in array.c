//reverse every subarray formed by k consecutive elements in array
#include<stdio.h>
int main()
{
  int temp,k,n,i,j,arr[100],l;
  printf("enter the no. of elements in array:\n");
  scanf("%d",&n);
  printf("enter the k value that is no. of elements in subarray:\n");
  scanf("%d",&k);
  if(k>n)
    printf("operation not possible\n");
  else
  {
   printf("enter array elements:\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   for(i=0;i<n;i=i+k)
   {
    l=i+k-1;
    if(l>=n)
        l=n-1;//if not want to reverse segment which has lessthan k,then use break;here
     for(j=i;j<l;j++)//here instead of l,i+(k/2) can also be used
     {
       temp=arr[j];
       arr[j]=arr[l];
       arr[l]=temp;
       l--;
     }
   }
   printf("the answer:\n");
   for(i=0;i<n;i++)
     printf("%d ",arr[i]);
  }
  return 0;
}
