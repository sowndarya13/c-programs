//to compare two strings without strcmp()
#include<stdio.h>
#include<stdlib.h>
int main()
{
char str1[100],str2[100];
int i=0,j=0,l1=0,l2=0,flag=0;
printf("enter two strings:\n");
scanf("%[^\n]%*c",str1);
scanf("%[^\n]%*c",str2);
for(l1=0;str1[l1]!='\0';l1++);
for(l2=0;str2[l2]!='\0';l2++);
if(l1==l2)
{
while(i<l1)
{
  if(str1[i]!=str2[j])
     flag=1;
  i++;
  j++;
}
if(flag!=1)
{
 printf("the strings are equal\n");
 exit(1);
}
}
 printf("the two strings are not same\n");
 return 0;
}
