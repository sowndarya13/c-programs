//to convert string of numbers to integer using recursion
#include<stdio.h>
int i=0;
long long int a=0;
long long int recur(char str[]);
int main()
{
 long long int a;
 char str[100];
 printf("enter string of numbers:\n");
 scanf("%s",str);
 a=recur(str);
 printf("%lld\n",a);
 return 0;
}
long long int recur(char str[])
{
  if(str[i]!='\0')
  {
    a=(a*10)+(str[i]-'0');
    i++;
    recur(str);
  }
  else
    return a;
}

