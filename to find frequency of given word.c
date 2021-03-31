//to find frequency of given word
#include<stdio.h>
int main()
{
 char str[100],str1[100],str2[100];
 int i,j=0,count=0,k,flag=0;
 str2[j]='\0';
 printf("enter a string:\n");
 scanf("%[^\n]%*c",str);
 printf("enter the word for which u want to find frequency:\n");
 scanf("%s",str1);
 for(k=0;str1[k]!='\0';k++);
 for(i=0;str[i]!='\0';i++)
 {
 if(str[i]!=' ')
{
  str2[j]=str[i];
  j++;
}
 else
  {
   str2[j]='\0';
   if(k==j)
   {
       for(j=0;j<k;j++)
       {
        if(str1[j]!=str2[j])
           {
               flag++;
               break;
           }
       }
        if(flag==0)
           count++;
    flag=0;
   }
   j=0;
  }
 }
  if(str[i]=='\0'&&str[i-1]!=' ')
  {
       str2[j]='\0';
        if(k==j)
   {
       for(j=0;j<k;j++)
       {
        if(str1[j]!=str2[j])
           {
               flag++;
               break;
           }
       }
        if(flag==0)
           count++;
  }
 }
 printf("%s\n",str2);
 printf("the frequency of %s in \"%s\" is %d",str1,str,count);
 return 0;
 }