//to find whether the equation has balanced symbols if not remove unbalanced symbols

//first and last occurrence of substring in string in c
#include<stdio.h>
int main()
{
    int i=0,j=0,n;
    char str1[100],str2[100];
    printf("enter string and substring:");
    scanf("%s%s",str1,str2);
    for(n=0;str2[n]!='\0';n++);
    for(;str1[i]!='\0';i++)
    {
        if(str1[i]==str2[j])
             {
                 j++;
                 if(str2[j]=='\0')
                    break;
             }
        else
           j=0;
    }
    if(j==n)
    {
       printf("the first and last occurrence of substring in string is %d and %d respectively",i-n+1,i);
    }
    else
      printf("substring is not in string");
    return 0;
}
