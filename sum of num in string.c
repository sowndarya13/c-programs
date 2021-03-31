//sum of numbers in string
#include<stdio.h>
int main()
{
char str[100];
int sum=0,i;
printf("enter a string:\n");
scanf("%[^\n]%*c",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='9')
  sum+=str[i]-'0';
}
printf("sum of num in string:%d\n",sum);
return 0;
}
