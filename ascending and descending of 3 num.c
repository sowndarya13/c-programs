//assending and descending of 3 nos. using array
#include<stdio.h>
int main()
{
   int arr[3],j,i,temp;
   printf("enter 3 nos. of type int");
   for(;i<3;i++)
     scanf("%d",&arr[i]);
    for(i=0;i<3;i++)
    {
      for(j=i+1;j<3;j++)
      {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
    }
     printf("the ascending order of given no. is ");
     for(i=0;i<3;i++)
         printf("%d ",arr[i]);
     printf("the descending order of given no. is ");
     for(j=2;j>=0;j--)
         printf("%d ",arr[j]);
     return 0;
}



