#include<stdio.h>
#include<stdbool.h>
unsigned short top;
int Stack[7];
#define max 7


bool StackIsEmpty()
{
	if(top==0)
	{
		printf("stack is empty");
	}
	else
	{
		printf("stack is not empty");
	}
}


void Push(int x)
{
	if(top == max)
	{
		printf("Overflow_error./n");
	}
	else
	{
		top=top+1;
		Stack[top]=x;
		printf("%d has been added to the stack\n",x);
	}
}


int Pop()
{
	int x;
	if(StackIsEmpty())
	{
		printf("Overflow_error./n");
	}
	else
	{
		x=Stack[top];
		top=top-1;
		return x;
	}
}

int TopOfStack()
{
	return Stack[top];
}

int main()
{
	Push(1);
	Push(2);
	Push(5);
	Push(0); 
	Push(7);
	Push(3);
	
	StackIsEmpty();
	
	printf("\nElement at the top of the stack : %d\n", TopOfStack());
	
	return 0;
}


