//sum of elements in zig zag sequence in given matrix
/*1 2 3
4 5 6
7 8 9*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int r,c,arr[100][100],i,j,sum=0;
 printf("enter no. of rows and columns:\n");
 scanf("%d%d",&r,&c);
 if(r!=c)
 {
     printf("zig zag sum not possible");
     exit(1);
 }
 printf("enter the matrix:\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
   scanf("%d",&arr[i][j]);
 }
 for(i=0;i<r;i++)
 {
  if(i==0||i==r-1)
  {
    for(j=0;j<c;j++)
      sum+=arr[i][j];
  }
  else
    sum+=arr[i][c-i-1];
 }
   printf("the zig zag sum of matrix is %d",sum);
   return  0;
 }





