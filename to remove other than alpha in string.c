//to remove other than alpha in string
#include<stdio.h>
int main()
{
 char str[100];
 int i,l,j;
 printf("enter a string:");
 scanf("%s",str);
 for(l=0;str[l]!='\0';l++)
 for(i=0;str[i]!='\0';i++)
 {
   if((str[i]>=65&&str[i]<=91)||(str[i]>=97&&str[i]<=123))
   {
   }
   else
   {
     for(j=i;j<l;j++)
       str[j]=str[j+1];
     str[j]='\0';
   }
}
  printf("%s",str);
return 0;
}
