//to  display no. of elements in array has even no. of digits
#include<stdio.h>
int main()
{
 int n,arr[100],count,j,i,count1=0;
 printf("enter no. of elements in array:\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 for(i=0;i<n;i++)
 {
   j=arr[i];
   count=0;
  while(j!=0)
  {
    count++;
    j/=10;
  }
  if(count%2==0)
     count1++;
 }
 if(count1==0)
   printf("There is no element in array which has even no. of digits\n");
 else
   printf("There are %d elements in array which has even no. of digits\n",count1);
return 0;
}
