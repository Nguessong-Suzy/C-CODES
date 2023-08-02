#include<stdio.h>

int fact(int n)
{
	if(n==0 || n==1 )
	{
		return 1;
	}
	else if(n>1)
	{
		
		return n*fact(n-1);
	}
	else
	{
		printf("\nInvalid input");
	}
}
int main()
{
	int i;
	int x;
	int m;
	printf("Enter a number: ");
	scanf("%d", &i);
	for(x=1; x<=i; x++)
	{
		for(m=1; m<=x; m++)
		{
			if(m==x){
				printf(" %d ", m);
			}else{
			
			printf(" %d x",m);
		}
		}
		
		printf(" = %d\n", fact(x));	
	}
}
