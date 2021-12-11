#include <stdio.h>

int main(void) {
  int i,n,count=0,a[20];
  printf("Enter the array size\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    if(a[i]!=0)
    {
    a[count]=a[i];
    count++;
    }
  }
  while(count<n)
  {
    a[count]=0;
    count++;
  
  }
/*for(i=0;i<n;i++)
printf("%d ",a[i]);*/
for(count=0;count<n;count++)
printf("%d ",a[count]);

  return 0;
}