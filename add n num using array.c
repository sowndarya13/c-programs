//add n numbers  using array
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter no. of num u want to add:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the nos. to be added\n");
    for(i=0;i<5;i++)
    {
     scanf("%d",&arr[i]);
     sum+=arr[i];
    }
    printf("the sum of the given numbers is %d",sum);
    return 0;
}
