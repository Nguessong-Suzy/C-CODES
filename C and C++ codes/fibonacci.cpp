#include<stdio.h>
int f(int n)
{
	if(n==0||n==1)
	return n;
	else
	return ( f(n-1) + f(n-2));
}
int main()
{
	int n;
	int c;
	int i=0;
	printf("enter a number\n");
	scanf("&d",&n);
	if(c=1||c<=n||c++)
	{printf("%d\n",f(i));
	i++;
	}
	return 0;
}
