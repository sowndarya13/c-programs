//to reverse only vowels in string
#include<stdio.h>
int main()
{
  char str[200],a;
  int i=0,j,l=0;
  printf("enter a string:\n");
  scanf("%[^\n]%*c",str);
  for(l=0;str[l]!='\0';l++);
  j=l-1;
   while(i<j&&i<l&&j>=0)
   {
    while(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
        i++;
    if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
    {
    if(i<j)
    {
    a=str[i];
    str[i]=str[j];
    str[j]=a;
    i++;
    j--;
    }
   else
     break;
    }
   else
     j--;
   }
  printf("%s",str);
  return 0;
}
