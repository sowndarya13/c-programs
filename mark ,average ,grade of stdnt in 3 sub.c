//accept roll_no,3 sub marks and calculate total,average and grade
#include<stdio.h>
int main()
{
   int roll_no,m1,m2,m3,sum=0;
   float avrg;
   printf("enter roll_no,marks of three subjects:\n");
   scanf("%d%d%d%d",&roll_no,&m1,&m2,&m3);
   sum=m1+m2+m3;
   printf(" the total marks is %d\n",sum);
   printf("the average marks is %d\n",sum/3);
   if(sum>=290&&sum<=300)
      printf("the grade is A");
    else if(sum>=250&&sum<290)
      printf("the grade is B");
    else if(sum>=200&&sum<250)
      printf("the grade is C");
    else if(sum>=150&&sum<200)
      printf("the grade is D");
    else
      printf("try to pass");
    return 0;
}
