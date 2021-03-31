//to find nCr and nPr
#include<stdio.h>
long long int fact(int);
int main()
{
 int n,r;
 long long int p;
 printf("enter n and r value:\n");
 scanf("%d%d",&n,&r);
 printf("%d",sizeof(int));
 p=fact(n)/fact(n-r);
 printf("The permutation(nPr) and combination(nCr) are %lld and %lld respectively\n",p,(p/fact(r)));
 return 0;
}
long long int fact(int n)
{
 long long int fact=1;
 int i;
 for(i=1;i<=n;i++)
  fact*=i;
 return fact;
}
