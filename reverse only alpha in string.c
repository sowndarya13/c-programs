#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i=0,j;
    char arr[100],temp;
    printf("enter string with integer numbers:");
    scanf("%s",&arr);
    j=strlen(arr)-1;
    for(i=0;i<=j;i++)
    {
        if(isalpha(arr[i]))
        {
            while(!(isalpha(arr[j])))
            {
                j--;
            }
            
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    for(i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
