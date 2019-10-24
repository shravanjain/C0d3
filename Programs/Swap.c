#include <stdio.h>
main()
{
  int a=1,b=2,c;
  printf("value before swap:\n");
  printf("a=%d and b=%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("value after swap:\n");
  printf("a=%d and b=%d\n",a,b);
}
