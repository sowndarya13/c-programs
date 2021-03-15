//total no. of alpha digits and special char in string
#include<stdio.h>
int main()
{
char str[100];
int i,j,count1=0,count2=0,count3=0;
printf("enter a string:\n");
scanf("%[^\n]%*c",str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>=65&&str[i]<=91)||(str[i]>=97&&str[i]<=123))
   count1++;
else if(str[i]>='0'&&str[i]<='9')
   count2++;
else
  count3++;
}
printf("alphabets:%d\n",count1);
printf("digits:%d\n",count2);
printf("special characters:%d\n",count3);
return 0;
}
