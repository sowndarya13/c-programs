//characters which are mismatched in array
#include<stdio.h>
int main()
{
  char str1[100],str2[100],str[100];
  int i=0,j=0,k=0,m,n;
  printf("enter the two strings of equal length:\n");
  scanf("%[^\n]%*c%[^\n]%*c",str1,str2);
  while(str1[i]!='\0')
  {
      m=i;
      if(str1[i]!=str2[j])
      {
          n=j;
          while(str1[i+1]!=str2[j+1])
          {
              i++;
              j++;
          }
          for(;m<=i;m++)
            str[k++]=str1[m];
          str[k++]=',';
          for(;n<=j;n++)
            str[k++]=str2[n];
          str[k++]=',';
      }
      i++;
      j++;
  }
  str[k-1]='.';
  str[k]='\0';
  printf("The mismatched chars:\n%s",str);
  return 0;
}
