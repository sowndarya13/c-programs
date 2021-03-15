//decimal to binary
#include<stdio.h>
int main()
{
 int n,j,arr[32],i=0;
 printf("enter a number:\n");
 scanf("%d",&n);
 while(n!=0)
 {
   arr[i]=n%2;
   n/=2;
   i++;
 }
 printf("the corresponding binary num is ");
 for(j=i-1;j>=0;j--)
    printf("%d",arr[j]);
 return 0;
 }
