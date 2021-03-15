//to print number triangle
/*       1
        121
       12321
      1234321*/
#include<stdio.h>
int main()
{
int n,i,j,k,count=0;
printf("enter the no. of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=n;j>i;j--)
        printf(" ");
 for(j=1;j<=(2*i)-1;j++)
 {
    count++;
   if(j-1==((2*i)-1)/2)
   {
    for(k=j;k<=(2*i-1);k++)
      printf("%d",count--);
    break;
   }
   else
     printf("%d",j);
 }
 printf("\n");
 count=0;
}
 return 0;
}
