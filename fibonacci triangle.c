//fibonacci triangle
#include<stdio.h>
int main()
{
 int n,i,j,temp=0,a=1,b=0;
 printf("enter the no. of rows:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<=i;j++)
   {
    temp=a+b;
    a=b;
    b=temp;
    printf("%d ",temp);
   }
   temp=0;
   a=1;
   b=0;
   printf("\n");
 }
 return 0;
}
