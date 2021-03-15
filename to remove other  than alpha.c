#include<stdio.h>
int main()
{
 int i;
 char arr[100];
 printf("enter a string");
 scanf("%s",arr);
 for(i=0;i<arr[i]!='\0';i++)
 {
  if((arr[i]>=65&&arr[i]<=91)||(arr[i]>=97&&arr[i]<=123))
  {
  continue;
  }
  else
  {
   for(j=i;arr[j]!='\0';j++)
     arr[j]=arr[j+1];
   i--;
  }
  }
  printf("%s",arr);
  return 0;
}

