//remove duplicates in string with xtra space
#include<stdio.h>
int main()
{
 char str[100],str1[100];
 int i,j,flag,l=0;
 printf("enter a string:\n");
 scanf("%[^\n]%*c",str);
 for(i=0;str[i]!='\0';i++)
 {
   flag=0;
  for(j=i-1;j>=0;j--)
  {
    if(str[i]==str[j])
    {
      flag=1;
      break;
    }
  }
    if(flag==0)
    {
      str1[l]=str[i];
      l++;
    }
 }
 str1[l]='\0';
 for(i=0;i<=l;i++)
    str[i]=str1[i];

 printf("%s",str);
 return 0;
}
