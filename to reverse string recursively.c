//to reverse string using recursion
#include<stdio.h>
int n,j=0;
void recurse(char str[],int n);
int main()
{
char str[100];
printf("enter the string:\n");
scanf("%[^\n]%*c",str);
for(n=0;str[n]!='\0';n++);
recurse(str,n);
printf("the reversed string is %s",str);
return 0;
}
void recurse(char str[],int i)
{
int temp;
if(i==n/2)
   return ;
else
  {
   temp=str[i-1];
   str[i-1]=str[j];
   str[j]=temp;
   i--;
   j++;
   recurse(str,i);
  }
}
