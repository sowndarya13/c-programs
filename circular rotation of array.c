//circular rotation of array by  position
#include<stdio.h>
int main()
{
int arr[100],n,i,j,rot,count=0,temp;
printf("enter the no. of elements in array:");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
printf("enetr the no. of rotations:");
scanf("%d",&rot);
 while(count!=rot)
 {
    temp=arr[n-1];
    for(j=n-1;j>=1;j--)
    {
      arr[j]=arr[j-1];
    }
    arr[0]=temp;
    count++;
 }
 for(i=0;i<n;i++)
    printf("%d ",arr[i]);
 return 0;
}
