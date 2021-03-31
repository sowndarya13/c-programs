//to count number of vowels in string
#include<stdio.h>
int main()
{
char str[100];
int i,count=0;
printf("enter a string:\n");
scanf("%[^\n]%*c",str);
for(i=0;str[i]!='\0';i++)
{
 if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      count++;
}
printf("the no. of vowels in given string:\n%d",count);
return 0;
}
