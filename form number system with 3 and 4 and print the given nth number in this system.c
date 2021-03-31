//form number system with 3 and 4 and print the given nth number in this system
#include<stdio.h>
int main()
{
 int i=0,j=0,n,k,m,pos,flag=0,dig=0;
 printf("enter the nth num u want to see:\n");
 scanf("%d",&n);
 for(k=3;i!=n;k++)
 {
    flag=0;
    m=k;
    pos=1;
    j=0;
    dig=0;
    while(m!=0)
    {
        dig++;
        m/=10;
    }
    m=k;
    while(j<dig)
    {
     m=(k/pos)%10;
     if(m!=3&&m!=4)
     {
      flag=1;
      break;
     }
     pos=pos*10;
     j++;
    }
    if(flag==0)
      i++;
 }
 printf("%d",k-1);
 return 0;
}
