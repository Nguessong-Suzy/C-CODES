#include<stdio.h>
long factorial(int n)
{
if(n==0 || n==1)
{
	return 1;
}
return n*factorial(n-1);
}
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d", &n);
	printf("the factorial of %d is %d", n, factorial(n));
	return 0;
}
