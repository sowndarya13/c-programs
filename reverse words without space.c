//reverse words without space
#include<stdio.h>
int main()
{
char str[100],a;
int i,j,l;
printf("enter a string:\n");
scanf("%[^\n]%*c",str);
for(l=0;str[l]!='\0';l++);
j=l-1;
for(i=0;i<l/2;i++)
{
    if(str[i]==' '&&str[j]==' ')
        j--;
    else if(str[j]==' ')
    {
        j--;
        i--;
    }
    else if(str[i]==' ')
        continue;
    else
    {
     a=str[i];
     str[i]=str[j];
     str[j]=a;
     j--;
    }
}
printf("the reverse string:\n%s\n",str);
return 0;
}
