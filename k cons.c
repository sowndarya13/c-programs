#include<stdio.h>
int main()
{
    int arr[100],i,j,n,pos_index=0,count=0,i1,k;
    printf("enter a no. of bits\n");
    scanf("%d",&n);
    printf("enter the bits:\n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("enter k\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        i1=i;
        if(arr[i]==1)
        {
           count++;
           for(j=i+1;arr[j]==1;j++)
           {
               count++;
               i++;
               if(count==k)
               {
                 pos_index=j+1;
                 n++;
                 for(j=n;j>pos_index;j--)
                     arr[j]=arr[j-1];
                  if(pos_index!=0)
                      arr[pos_index]=0;
                 break;
               }
           }
           count=0;
           if(i1!=i)
            i--;

        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
