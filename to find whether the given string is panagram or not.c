//to check the string is panagram or not
//panagram-if the string contains all alphabets then it is pangram(here the alphabet may be repeated) else not
#include<stdio.h>
int main()
{
 int i=65,j=97,k,count=0;
 char str[200];
 printf("enter a string:\n");
 scanf("%[^\n]%*c",str);
 for(;i<=91&&j<=123;i++,j++)
 {
  for(k=0;str[k]!='\0';k++)
  {
    if(str[k]==i||str[k]==j)
    {
      count++;
      break;
    }
  }
 }
 if(count==26)
    printf("The string\"%s\" is a panagram.so TRUE\n",str);
 else
   printf("The staring \"%s\" is not a panagram.so FALSE\n",str);
 return 0;
}
