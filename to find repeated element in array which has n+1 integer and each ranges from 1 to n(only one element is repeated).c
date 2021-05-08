//to find repeated element in array which has n+1 integer and each ranges from 1 to n(only one element is repeated)
#include<stdio.h>
int main()
{
 int arr[100],i,n,j,sum=0,sum1=0;
 printf("enter the n value such that array has n+1 value:\n");
 scanf("%d",&n);
 printf("enter array elements:\n");
 for(i=0;i<=n;i++)
    scanf("%d",&arr[i]);
 for (i=0,j=1;i<=n;i++,j++)
 {
   sum+=arr[i];
   sum1+=j;
 }
 i=sum1-sum;
 sum=n+1-i;
 printf("the repeated element is %d",sum);
 return 0;
}
