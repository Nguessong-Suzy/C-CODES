#include<stdio.h>

int ones(int n)
{
	if(n==0)
	{
		printf("1");
	}
	else{
	for(int i=1; i<=(2^n); i++)
	{

		return ones(n-1);
		printf("a");
	}
}
}

int main(){
	ones(2);
}
