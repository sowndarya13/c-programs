//to rearrange array with +ve nd -ve no. to be have all -ve no. first followed by +ve no. without using xtra space(order not matters)
#include<stdio.h>
int main()
{
 int temp,i,j,n,arr[100];
 printf("enter the no. of elements in array\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 for(i=0;i<n-1;i++)
 {
   if(arr[i]>=0)
   {
     for(j=i+1;j<n;j++)
     {
       if(arr[j]<0)
       {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
         break;
       }
    }
   }
 }
 for(i=0;i<n;i++)
    printf("%d,",arr[i]);
return 0;
}
