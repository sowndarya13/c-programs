//to print the char(s) which has n occurrence (if the character consecutively repeats then it is taken as 1 count)
#include<stdio.h>
int main()
{
 char str1[100],str2[100];
 int i,j,n,flag,count=1,m=0,l=0;
 printf("enter a string:\n");
 scanf("%[^\n]%*c",str1);
 printf("enter the  no. of occurrence:\n");
 scanf("%d",&n);
 for(l=0;str1[l]!='\0';l++);
 for(i=0;i<l;i++)
 {
    flag=0;
   for(j=i-1;j>=0;j--)
   {
   if(str1[i]==str1[j])
   {
     flag=1;
     break;
   }
   }
   if(flag==1)
      continue;
   count=1;
   for(j=i+1;j<l;j++)
     {
     if(str1[i]==str1[j])
     {
         if(str1[j]!=str1[j-1])
            count++;
     }
     }
     if(count==n)
     {
       str2[m]=str1[i];
       m++;
     }
}
if(m==0)
    printf("there is no character with the mentioned no. of occurrences\n");
else
{
for(i=0;i<m;i++)
   printf("%c ",str2[i]);
}
return 0;
}
