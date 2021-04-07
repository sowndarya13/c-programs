//to find whether the word is written in acceptable format
#include<stdio.h>
int main()
{
 char str[100];
 int j;
 printf("enter a word:\n");
 scanf("%s",str);
   if(str[0]>=97&&str[0]<=123)
   {
     for(j=1;(str[j]!='\0')&&(str[j]>=97&&str[j]<=123);j++);
   }
   else if(str[0]>=65&&str[0]<=91)
   {
    for(j=1;(str[j]!='\0')&&(str[j]>=65&&str[j]<=91);j++);
    if(str[j]!='\0')
    {
    for(j=1;(str[j]!='\0')&&(str[j]>=97&&str[j]<=123);j++);
    }
   }
    if(str[j]=='\0')
      printf("TRUE\n");
    else
       printf("FALSE\n");
    return 0;
}
