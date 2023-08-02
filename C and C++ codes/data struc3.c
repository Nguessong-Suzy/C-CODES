#include<stdio.h>
#include<stdbool.h>
#define max 5
int Queue[max];
int end=0;
int head=0;
int value=0;

int NumberOfElement()
{
	return (value);
}

bool QueueIsEmpty()
{
	if(NumberOfElement()==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool QueueIsFull()
{
	if(NumberOfElement()==max)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Enqueue(int x)
{
	if(!QueueIsFull())
	{
		Queue[end]=x;
		value++;
		end=(end+1)%max;
		printf("%d has been added to the queue\n", x);
	}
	else
	{
		printf("overflow\n");
	}
}


int Dequeue()
{
	if(!QueueIsEmpty())
	{
	    printf("%d has been removed from the queue\n", Queue[head]);
		head=(head+1)%max;
		value--;
		return Queue[head];
	}
	else
	{
		printf("overflow\n");
	}
}

HeadOfQueue()
{
	return Queue[head];
}


int main()
{
	Enqueue(8);
	Enqueue(5);
	Enqueue(7);
	Enqueue(2);
	Dequeue();
	Dequeue();
	Enqueue(1);
	Enqueue(9);
	Enqueue(4);
	printf("\nNumber of element in the queue: %d", NumberOfElement());
	printf("\nHead of queue: %d", HeadOfQueue());
	
	if(QueueIsEmpty())
	{
		printf("\nqueue is empty\n");
	}
	else
	{
		printf("\nqueue is not empty\n");
	}
	if(QueueIsFull())
	{
		printf("queue is full\n");
	}
	else
	{
		printf("queue is not full\n");
	}
	
	return 0;

}
