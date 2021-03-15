//to split string by space into words
#include<stdio.h>
int main()
{
char str[100],str1[100];
int i,j=0;
printf("enter the string:\n");
scanf("%[^\n]%*c",str);
for(i=0;str[i]!='\0';i++)
{
 if(str[i]!=' ')
 {
  str1[j]=str[i];
  j++;
 }
 else if(str[i]==' ')
 {
  str1[j]='\0';
  if(str1[0]!='\0')
    printf("%s\n",str1);
  j=0;
 }
}
if((str[i-1]!=' ')&&(str[i]=='\0'))
{
    str1[j]='\0';
    printf("%s\n",str1);
}
return 0;
}
