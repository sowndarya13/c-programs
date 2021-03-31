#include<stdio.h>
int main()
{
    int arr[100],i,count=0,count1=0,n,j,k;
    printf("enter no. of elements in array:");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
               count++;
           }
        }
        for(k=i-1;k>=0;k--)
        {
            if(arr[i]==arr[k])
            {
                count1++;
            }
        }
        if(count1==0)
            printf("the no. of occurrence of %d in array is %d\n",arr[i],count);
        count=0;
        count1=0;
    }
    return 0;
}
