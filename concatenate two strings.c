//concatenate two strings
#include<stdio.h>
int main()
{
char str1[100],str2[100];
int i,j=0;
printf("enter two strings:\n");
scanf("%[^\n]%*c",str1);
scanf("%[^\n]%*c",str2);
for(i=0;str1[i]!='\0';i++);
str1[i++]=' ';
for(j=0;str2[j]!='\0';j++)
{
   str1[i]=str2[j];
   i++;
}
printf("%s",str1);
return 0;
}
