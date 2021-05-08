//own atoi implementation(difference from build in atoi is that if the strings contain other than no.(except space at first and followed by no.) at any place,return -1  )
#include<stdio.h>
int atoi(char str[]);
int main()
{
 char str[100];
 scanf("%[^\n]%*c",str);
 printf("%d",atoi(str));
 return 0;
}
int atoi(char str[])
{
 int res=0,i=0,sign=1;
 while(str[i]==' ')
    i++;
 if(str[i]=='-'||str[i]=='+')
    sign=1-2*(str[i++]=='-');
 while(str[i]>='0'&&str[i]<='9')
     res=res*10+(str[i++]-'0');
  res=res*sign;
 if(str[i]!='\0'||str[i-1]==' ')
    return -1;
 return res;
}
