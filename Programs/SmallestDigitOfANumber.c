#include<stdio.h>
main()
{
 int n,small,temp;
 printf("Enter a number: ");
 scanf("%d",&n);
 small=n%10;
 while(n>0)
 {
  temp=n%10;
  if(small>temp)
   small=temp;
  n/=10;
 }
 printf("\nThe smallest digit is: %d",small);
}
