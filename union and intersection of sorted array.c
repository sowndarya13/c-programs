//to find union and intesection of sorted arrays
#include<stdio.h>
int main()
{
int arr1[100],arr2[100],i,j,l,m;
printf("enter no. of elements in array1 and array2:\n");
scanf("%d%d",&l,&m);
printf("enter 1st sorted array elements:\n");
for(i=0;i<l;i++)
  scanf("%d",&arr1[i]);
for(i=0;i<m;i++)
  scanf("%d",&arr2[i]);
i=0;
j=0;
printf("union:\n{");
while(i<l&&j<m)
{
if(arr1[i]<arr2[j])
 printf("%d,",arr1[i++]);
else if(arr1[i]>arr2[j])
  printf("%d,",arr2[j++]);
else
{
  printf("%d,",arr2[j++]);
  i++;
}
}
while(i<l)
{
   {
    if(i+1!=l||j<m)
   printf("%d,",arr1[i++]);
   else
   printf("%d",arr1[i++]);
  }
}
while(j<m)
{
  if(j+1!=m||i<l)
  printf("%d,",arr2[j++]);
  else
   printf("%d",arr2[j++]);
}
printf("}\nintersection of two arrays:\n{");
i=0;
j=0;
while(i<l&&j<m)
{
if(arr1[i]<arr2[j])
   i++;
else if(arr1[i]>arr2[j])
   j++;
else
{
   printf("%d,",arr2[j++]);
  i++;
}
}
printf("}");
return 0;
}
