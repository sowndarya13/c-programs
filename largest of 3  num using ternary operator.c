//largest among three num using ternary operator
#include<stdio.h>
int main()
{
   int a,b,c,large;
   printf("enter three num:");
   scanf("%d%d%d",&a,&b,&c);
   large=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
   printf("%d",large);
   return 0;
}
