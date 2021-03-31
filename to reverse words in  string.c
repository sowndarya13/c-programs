//reverse order of words in string
#include<stdio.h>
int main()
{
char str[100],str1[100];
int i,j=0,l,k,m=0;
printf("enter the string:\n");
scanf("%[^\n]*c",str);
for(l=0;str[l]!='\0';l++);
for(i=l-1;i>=0;i--)
{
 if(str[i]!=' ')
 {
  str1[j]=str[i];
  j++;
 }
 else if(str[i]==' ')
 {
      str1[j]='\0';
      for(k=0;str1[k]!='\0';k++);
            for(j=k-1;j>=0;j--)
                printf("%c",str1[j]);
      printf(" ");
      j=0;
}
}
if(i+1!=' ')
{
str1[j]='\0';
 for(k=0;str1[k]!='\0';k++);
 for(j=k-1;j>=0;j--)
 {
  printf("%c",str1[j]);
 }
}
return 0;
}
/*reverse order of words in string
#include<stdio.h>
int main()
{
char str[100],str1[100],str2[100];
int i,j=0,l,k,m=0;
printf("enter the string:\n");
scanf("%[^\n]*c",str);
for(l=0;str[l]!='\0';l++);
for(i=0;i<l;i++)
{
    if(str[i]==' ')
      {
          str2[m]=' ';
          m++;
      }
    else if(str[i]!=' ')
    {
        if(str[i-1]==' ')
          {
              str2[m]='.';
              m++;
          }
    }
}
m=0;
printf("%s",str2);
for(i=l-1;i>=0;i--)
{
 if(str[i]!=' ')
 {
  str1[j]=str[i];
  j++;
 }
 else if(str[i]==' ')
 {
      str1[j]='\0';
      while(str2[m]==' ')
      {
         printf(" ");
         m++;
      }
      m++;
      for(k=0;str1[k]!='\0';k++);
            for(j=k-1;j>=0;j--)
                printf("%c",str1[j]);
      j=0;
}
}
if(i+1!=' ')
{
str1[j]='\0';
 while(str2[m]==' ')
      {
         printf(" ");
         m++;
      }
      m++;
 for(k=0;str1[k]!='\0';k++);
 for(j=k-1;j>=0;j--)
 {
  printf("%c",str1[j]);
 }
}
 printf("summa");
return 0;
}
*/
