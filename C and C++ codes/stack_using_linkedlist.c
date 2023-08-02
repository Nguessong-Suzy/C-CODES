#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

node *top;
int element;
void Initialisation()
{
	top=NULL;
	element=0;
}

void Push(int value)
{
	node *tem;
	tem = malloc(sizeof(node));
	tem -> data=value;
	tem -> next=top;
	top=tem;
	element++;
	printf("%d has been add to the stack\n", value);
}

int Pop()
{
	if(StackIsEmpty())
	printf("stack is empty\n");
	else
	{
    	node *tem;
	    int p;
    	tem=top;
    	p=tem ->data;
    	top=top ->next;
    	free(tem);
    	element--;
    	printf("%d has been remove from the stack\n", p);
    	return p;
    }
}
	
int Top()
{
	return top->data; 
}	


int StackIsEmpty()
{
	if(top==NULL) 
	printf("stack is empty\n");
	else
	printf("stack is not empty\n");
}

void Display(node *head)
{
	if(head == 0)
	printf("NULL\n");
	else
	{
		printf("%d\n", head -> data);
		Display(head->next);
	}
}

int main()
{
	Initialisation();
	Push(6);
	Push(10);
	Push(2);
	Push(5);
	printf("The top of the stack is %d\n", Top());
	Pop();
	printf("The top after pop is %d\n", Top());
	printf("There are %d element in the stack\n", element);
	Display(top);
	StackIsEmpty();
	return 0;
}

