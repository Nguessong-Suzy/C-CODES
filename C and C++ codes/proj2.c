#include<stdio.h>
int main()
{
	int k [20],num,i=0;
	printf("enter an integer\n");
	scanf("%d", &num);
	while(num!=0)
	{
		k[i] =num%2;
		num=num/2;
		i++;
	}
	for(i=i-1;i>=0; i--)
	printf("%d", k[i]);
	return 0;
}
	
