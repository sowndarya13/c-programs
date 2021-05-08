//to print size of longest substring that has k unique characters
#include<stdio.h>
int main()
{
 char str[100];
 int i,j,count,l,flag,m,k,n;
 int max=0;
 scanf("%[^\n]%*c",str);
 scanf("%d",&k);
 for(l=0;str[l]!='\0';l++);
 for(i=0;i<=l-k;i++)
 {
   for(m=i+k-1;m<l;m++)
   {
    count=0;
    j=i;
    while(j<m)
    {
      flag=0;
       for(n=j+1;n<=m;n++)
       {
         if(str[j]==str[n])
         {
            flag=1;
            break;
         }
       }
       j++;
       if(flag==0)
            count++;
    }
     if(count+1==k&&m-i+1>max)
        max=m-i+1;
   }
}
if(max!=0)
       printf("%d",max);
else
  printf("-1");
 return 0;
}
