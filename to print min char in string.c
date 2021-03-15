//to print min char in string
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,count=1,count1[100],k=0,l,flag1=0;
char arr[100],arr1[100];
arr1[k]='\0';
printf("enter the string:\n");
scanf("%[^\n]%*c",arr);
for(n=0;arr[n]!='\0';n++);
 for(i=0;arr[i]!='\0';i++)
{
 for(j=0;arr[j]!='\0';j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
count=0;
printf("the min occurrence characters:");
for(i=1;i<=n;i++)
{
    for(j=0;j<n;j++)
    {
    if(count1[j]==i)
    {
      count++;
      if(arr1[k]=='\0')
      {
        arr1[k]=arr[j];
        k++;
      }
      else
      {
          for(l=0;l<k;l++)
          {
              if(arr1[l]==arr[j])
                  flag1++;
         }
         if(flag1==0)
              {
                arr1[k]=arr[j];
                 k++;
              }
          flag1=0;
      }

    }
    }
    if(count!=0)
      break;
}
for(i=0;i<k;i++)
 printf("%c ",arr1[i]);
return 0;
}
