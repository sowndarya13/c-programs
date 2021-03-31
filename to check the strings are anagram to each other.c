//to check strings are anagram to each other
#include<stdio.h>
int main()
{
char str1[100],str2[100],temp;
int i,j,l1,l2,flag=0;
printf("enter two strings:\n");
scanf("%[^\n]%*c",str1);
scanf("%[^\n]%*c",str2);
for(l1=0;str1[l1]!='\0';l1++);
for(l2=0;str2[l2]!='\0';l2++);
if(l1!=l2)
   printf("the strings are not anagram to each other\n");
else
{
for(i=0;i<l1-1;i++)
{
 for(j=0;j<l1-1;j++)
 {
   if(str1[j]>str1[j+1])
   {
   temp=str1[j];
   str1[j]=str1[j+1];
   str1[j+1]=temp;
   }
   if(str2[j]>str2[j+1])
   {
   temp=str2[j];
   str2[j]=str2[j+1];
   str2[j+1]=temp;
   }
 }
}
for(i=0;i<l1;i++)
{
if(str1[i]!=str2[i])
{
  flag=1;
  break;
}
}
if(flag==1)
    printf("the strings are not anagram to each other\n");
else
  printf("the strings are anagram to each other\n");
}
return 0;
}
