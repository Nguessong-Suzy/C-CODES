#include<stdio.h>
#include<stdlib.h>

struct node //creation of the node
{
	int data;
	struct node *next;
};
typedef struct node node;

node *head;
node *end;
int element;

void Initialisation() //initialisation function
{
	head=NULL;
	end=NULL;
  element=0; // the variable element is used to determine wether there are elements in the queue or not.
}

void QueueIsEmpty() //to find if the queue is empty or not
{
	if(head==NULL && end==NULL)
	printf("\nQueue is empty\n");
	else
	printf("\nQueue is not empty\n");
}

void Enqueue(int value) //inserting in the queue using dynamical memory
{
	node *tem = malloc(sizeof(node));
	tem->data=value;
	tem->next=NULL;
	if(head==NULL && end==NULL)
	head=end=tem;
	else
	{
		end->next=tem;
		end=tem;
	}
	printf("%d has been added to the queue\n", value);
element++;
}

void Dequeue()  //removing from the enqueue
{
   node *tem;
   tem = head;
   if (head == NULL) 
   { 
      printf("\n Queue is empty\n"); 
   } 
    else if (tem->next != NULL) //testing if the address of the next instruction does not points to null
    { 
     tem = tem->next;
     printf("\n %d has been removed from the queue\n", head->data); 
     free(head); 
     head = tem; 
    } 
    else
     { 
       printf("\n %d has been removed from the queue", head->data); 
       free(head); 
       head = NULL; 
       end = NULL; 
    }
    element--;
  }
 
 void Display()
 {
 	node *tem;
 	tem = head;
 	if(tem == NULL && end == NULL)
 	{
 		printf("Queue is empty\n");
	 }
	 while(tem != end)
	 {
	 	printf("\n%d", tem->data);
	 	tem=tem->next;
	 }
	 if(tem == end)
	 {
	 	printf("\n%d", tem->data);
	 }
 }
 
 int HeadOfQueue()
 {
 	if(head != NULL && end != NULL)
 	return(head->data);
 	else
 	return 0;
 }
 
 int EndOfQueue()
 {
 	if(head != NULL && end != NULL)
 	return(end->data);
 	else
 	return 0;
 }

int main()
{
	Initialisation();
	Enqueue(7);
	Enqueue(10);
    Enqueue(3);
    Enqueue(5);
    Enqueue(8);
    Enqueue(9);
	Dequeue();
    QueueIsEmpty();
    printf("\nThere are %d elements in the queue", element);
	Dequeue();
    printf("\n There are %d elements in the queue", element);
    Display();
    printf("\n%d is the head of Queue", HeadOfQueue());
    printf("\n%d is the end of Queue", EndOfQueue());
    return 0;
}

    
