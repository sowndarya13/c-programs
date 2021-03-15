//transpose of given matrix
#include<stdio.h>
int main()
{
int arr[100][100],transpose[100][100],r,c,i,j;
printf("enter the no. of rows and columns:\n");
scanf("%d%d",&r,&c);
printf("enter the matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
  scanf("%d",&arr[i][j]);
}
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  transpose[j][i]=arr[i][j];
}
for(i=0;i<c;i++)
{
 for(j=0;j<r;j++)
 {
   printf("%d ",transpose[i][j]);
 }
 printf("\n");
}
return 0;
}
