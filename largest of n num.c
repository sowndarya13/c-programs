//largest of n num
#include<stdio.h>
int main()
{
   int a[100],n,i,max;
   printf("enter no. of elements in array:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   max=a[0];
   for(i=0;i<n;i++)
   {
       if(max<a[i])
         max=a[i];
   }
   printf(" the large element is %d",max);
   
   return 0;
}
