#include<math.h>
int main()
{
    float a,b,c,root1,root2,discriminant,real,img;
    printf("enter the coefficient of a,b and c");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=pow(b,2)-(4*a*c);
    printf("the value of root1 and root2 is ");
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("%.2f and %.2f",root1,root2);
    }
    else if(discriminant<0)
    {
      real=-b/2*a;
      img=sqrt(-(discriminant))/(2*a);
      printf("%.2f+i%.2f and %.2f-i%.2f",real,img,real,img);
    }
    else
    {
        root1=root2=-b/(2*a);
        printf("%.2f and %.2f",root1,root2);
    }
    return 0;
}
