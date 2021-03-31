//to print the characters in a string for no. of times equal to the number which is after that character in string
#include<stdio.h>
int main()
{
char str[100],str1[100];
int i,j,k=0,l,sum;
printf("enter the string:\n");
scanf("%[^\n]%*c",str);
for(l=0;str[l]!='\0';l++);
for(i=0;i<l;i++)
{
   sum=0;
  if(!(str[i]>='0'&&str[i]<='9'))
  {
   for(j=i+1;j<l;j++)
   {
      if((str[j]>='0')&&(str[j]<='9'))
      {
       sum=sum*10+str[j]-'0';
      }
      else
        break;
   }
    if(sum!=0)
    {
      for(j=0;j<sum;j++)
      {
        str1[k]=str[i];
        k++;
      }
    }
    else
    {
      str1[k]=str[i];
      k++;
    }
  }
}
str1[k]='\0';
printf("The output string:\n%s",str1);
return 0;
}
