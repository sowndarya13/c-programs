//to add two large digit num which are stored array
#include<stdio.h>
int main()
{
 int arr1[100],arr2[100],i,j,n,n1,small,lar,arr3[100],tens=0,sum,s1;
 printf("enter the no. of digits of first num:\n");
 scanf("%d",&n);
 printf("enter each digit of first num in array:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr1[i]);
 printf("enter the no. of digits of second num:\n");
 scanf("%d",&n1);
 printf("enter each digit of second num in array:\n");
 for(i=0;i<n1;i++)
   scanf("%d",&arr2[i]);
if(n>=n1)
{
  lar=n;
  small=n1;
}
else
{
  lar=n1;
  small=n;
}
j=lar;
i=lar-1;
s1=small-1;
 while(s1>=0)
 {
      sum=0;
      if(lar==n)
        sum=arr1[i]+arr2[s1]+tens;
      else
        sum=arr1[s1]+arr2[i]+tens;
      arr3[j]=sum%10;
      tens=(sum/10)%10;
      i--;
      j--;
      s1--;
 }
   if(n==n1)
     arr3[j]=tens;
 while(i>=0)
 {
  if(n==lar)
        arr3[j]=arr1[i]+tens;
  else
       arr3[j]=arr2[i]+tens;
    i--;
    j--;
    tens=0;
 }
 if(n!=n1)
    arr3[j]=0;
 if(arr3[j]==0)
 {
     for(i=0;i<lar;i++)
         arr3[i]=arr3[i+1];
    lar--;
 }
 printf("the addition of array:\n");
 for(i=0;i<=lar;i++)
     printf("%d",arr3[i]);
  return 0;
 }
