//add n numbers without using array
#include<stdio.h>
int main()
{
    int n,i,sum=0,num;
    printf("enter no. of num u want to add:");
    scanf("%d",&n);
    printf("enter the nos. to be added\n");
    for(i=0;i<5;i++)
    {
     scanf("%d",&num);
     sum+=num;
    }
    printf("the sum of the given numbers is %d",sum);
    return 0;
}
