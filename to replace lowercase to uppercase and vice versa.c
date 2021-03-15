//to replae lowercase by uppercase and vice versa
#include<stdio.h>
int main()
{
char str[100];
int i,j;
printf("enter a sentence:\n");
scanf("%[^\n]%*c",str);
for(i=0;str[i]!='\0';i++)
{
 if((str[i]>=65&&str[i]<=91)
 {
  str[i]=str[i]+33;
 }
 else if(str[i]>=97&&str[i]<=123)
 {
  str[i]=str[i]-33;
 }
}
printf(str);
return 0;
}
