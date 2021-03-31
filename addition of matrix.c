//matrix addition
#include<stdio.h>
int main()
{
int arr1[100][100],arr2[100][100],res[100][100],i,j,r1,c1,r2,c2,sum=0;
printf("enter no. of rows and columns in matrix 1 and matrix 2 respectively:\n");
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
if(r1==r2&&c1==c2)
{
printf("enter array1 elements:\n");
for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
  scanf("%d",&arr1[i][j]);
}
printf("enter array1 elements:\n");
for(i=0;i<r2;i++)
{
 for(j=0;j<c2;j++)
  scanf("%d",&arr2[i][j]);
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
  res[i][j]=arr1[i][j]+arr2[i][j];
}
printf("the addition matrix\n");
for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
  printf("%d\t",res[i][j]);
 printf("\n");
}
}
else
  printf("addition not possible as dimensions are not equal\n");
return 0;
}
