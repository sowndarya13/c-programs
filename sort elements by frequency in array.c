//sort elements by frequency in array
#include<stdio.h>
int main()
{
int arr[100],arr1[100],n,i,j,k=0,count=1,count1[100],l=0;
printf("enter no. of elements:");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
count=0;
printf("the frequency sorting of given array:\n");
for(i=n;i>0;i--)
{
 for(j=0;j<n;j++)
 {
  if(count1[j]==i)
    {
          for(l=0;l<j;l++)
          {
              if(arr[j]==arr[l])
                 count++;
          }
          if(count==0)
            {
                for(l=j;l<n;l++)
                {
                   if(arr[j]==arr[l])
                   {
                       arr1[k]=arr[j];
                        k++;
                   }
                }
            }
            count=0;
      }

 }
}
 for(i=0;i<k;i++)
 printf("%d ",arr1[i]);
return  0;
}
