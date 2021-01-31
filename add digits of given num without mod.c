//accept num and sum of digits "without using modulus"
#include <stdio.h>
int main()
{
int sum=0,i=0,r;
char arr[10000];
printf("enter an integer:");
scanf("%s",&arr);
while(arr[i]!='\0')
{
    r=arr[i]-'0';
    sum+=r;
    i++;
}
printf("sum of digits is %d",sum);
return 0;
}
