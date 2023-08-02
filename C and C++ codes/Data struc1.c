#include<stdio.h>
#include<stdbool.h>
unsigned short top;
int Stack[7];
#define max 7


bool StackIsEmpty()
{
	if(top==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool StackIsFull()
{
	if(top==max)
	{
		return true;
	}
	else
	{
		return false;
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
		return Stack[top+1];
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

     
	printf("\nElement at the top of the stack : %d\n\n", TopOfStack());
	
while(!StackIsEmpty())
	{
		printf("%d has been removed from the stack\n", Pop());
	}
	
	if(StackIsEmpty())
	{
		printf("\nstack is empty\n");
	}	
	else 
	{
		printf("stack is not empty\n");
	}
	
	if(StackIsFull())
	{
		printf("\nstack is full\n");
	}
	else
	{
		printf("\nstack is not full");
	}
	
	return 0;
}


