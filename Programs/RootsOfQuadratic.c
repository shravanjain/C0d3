#include<stdio.h>
#include<math.h>
main()
{
 float a,b,c,root1,root2,x,y;
 printf("Enter values of a,b,c in ax^2+bx+c=0: \n");
 scanf("%f %f %f",&a,&b,&c);
 root1=(-b+sqrt(b*b-4*a*c))/(2*a);
 root2=(-b-sqrt(b*b-4*a*c))/(2*a);
 if(b*b>=4*a*c)
  printf("The roots of the equation %fx^2+%fx+%f=0 are: %f , %f ",a,b,c,root1,root2);
 else
  {
   x=(sqrt(4*a*c-b*b))/(2*a);
   y=-(b/(2*a));
   printf("The roots are %f+%fi and %f-%fi",y,x,y,x);
  }
}
