#include<stdio.h>
#include<stdbool.h>
#define max 5
int Queue[max];
int end=-1;
int head=0;

bool QueueIsEmpty()
{
	if(head>end)
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
	if(end<(max-1))
	{
		end=end+1;
		Queue[end]=x;
		printf("%d has been added to the Queue\n",x);
	}
	else
	{
		printf("overflow_error\n");
	}
}

int Dequeue()
{
	if(QueueIsEmpty())
	{
		printf("overflow_error\n");
	}
	else
	{
		head=head+1;
		printf("%d has been removed from the queue\n", Queue[head-1]);
		return(Queue[head-1]);
	}
}

int NumberOfElement()
{
	return (end-head+1);
}

int HeadOfQueue()
{
	return Queue[end];
}

int main()
{
	Enqueue(5);
	Enqueue(8);
	Enqueue(3);
	Enqueue(7);
	Enqueue(1);
	Dequeue();
	Dequeue();
	
	printf("Number of element : %d\n",NumberOfElement());
	
	printf("head of queue : %d\n", HeadOfQueue());
	
	if(QueueIsEmpty())
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("queue is not empty\n");
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
