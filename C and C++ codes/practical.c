#include<stdio.h>
int main(void)
{
  int a,b,c,max;
  printf("please enter the three numbers\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a>b)
  max = a;
  else
  max = b;
  if(max > c)
  printf("Maximum of %d , %d and %d, is: %d\n",a,b,c,max);
  else
  printf("Maximum of %d , %d and %d, is: %d\n",a,b,c,c);
  return 0;
}
