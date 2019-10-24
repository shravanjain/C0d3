#include<stdio.h>
main()
{
  int a=1,b=2;
  printf("value before swap:\n");
  printf("a=%d and b=%d\n",a,b);
  a+=b;
  b=a-b;
  a-=b;
  printf("value after swap:\n");
  printf("a=%d and b=%d\n",a,b);
}
