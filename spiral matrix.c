//spiral matrix
#include<stdio.h>
int main()
{
    int i,j,r1=0,r2,c1=0,c2,arr[100][100];
    printf("enter no. of rows and columns in matrix:");
    scanf("%d%d",&r2,&c2);
    printf("enter the matrix elements:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    while(r1<r2&&c1<c2)
    {
        for(i=c1;i<c2;i++)
          printf("%d ",arr[r1][i]);
        r1++;
        for(i=r1;i<r2;i++)
           printf("%d ",arr[i][c2-1]);
        c2--;
        if(r1<r2)
        {
            for(i=c2-1;i>=c1;i--)
               printf("%d ",arr[r2-1][i]);
            r2--;
        }
        if(c1<c2)
        {
            for(i=r2-1;i>=r1;i--)
               printf("%d ",arr[i][c1]);
            c1++;
        }
        
    }
    return 0;
}
