//to find the missing integer in array[given:only one integer 'll be missing in array which has no duplicates array has n-1 integers each range from 1 to n]
#include<stdio.h>
int main()
{
 int arr[100],i,j,n,ini,flag;
 printf("enter n such that array has n-1 integers:\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n-1;i++)
   scanf("%d",&arr[i]);
 ini=n;
 while(1)
 {
  flag=0;
  for(i=0;i<n-1;i++)
  {
    if(arr[i]==ini)
    {
       flag=1;
       break;
    }
  }
  if(flag==0)
  {
   printf("the missing int is %d",ini);
   break;
  }
  ini--;
}
return 0;
}
