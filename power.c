//To find power of given number without using pow():
#include<stdio.h>
int main(void)
{
  int n,b,i,a=1;
  printf("Enter the base number\n");
  scanf("%d",&b);
  printf("Enter the power of number\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    a=a*b;
  }
  printf("%d power %d is %d",b,n,a);
  return 0;
}