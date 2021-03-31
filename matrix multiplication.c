//matrix multiplication
#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum=0;
    int arr1[100][100],arr2[100][100],res[100][100];
    printf("enter no. of rows and columns in 1st matrix:\n");
    scanf("%d%d",&r1,&c1);
     printf("enter no. of rows and columns in 2nd matrix:\n");
    scanf("%d%d",&r2,&c2);
     if(r2!=c1)
    {
        printf("As the 1st mat column and 2nd mat row are not equal,matrix mul is not possible:\n");
    }
    else
    {
    printf("enter 1st matrix element:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
          scanf("%d",&arr1[i][j]);
    }
        printf("enter the elements of 2nd matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    sum+=arr1[i][k]*arr2[k][j];
                }
                res[i][j]=sum;
                sum=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
