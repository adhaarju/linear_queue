#include<stdio.h>
#define SIZE 5
int linear_queue[SIZE];
int rear=-1, front=-1;
void enqueue (int);
void dequeue();
void front_element();
void display();
int is_empty();
int is_full();
int exit();
int main()
{
	int choice,data;
	while (1){
	printf("\nEnter 1 for enqueue:\nEnter 2 for dequeue: \nEnter 3 for font: \nEnter 4 for Display: \nEnter 5 for exit: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("Enter your integer:");
			scanf("%d",&data);
			enqueue(data);
			break;
		case 2:
			dequeue();
		break;	
	case 3:
		front_element();
		break;	
	case 4:
	    display();
		break;	
	case 5:
			is_empty();
			break;
	case 6:
		is_full();
		break;
	case 7:
		exit();
		break;
	case 8:
		default;
	}
}
	return 0;
}
void enqueue(int data)
{
	if(rear==SIZE-1)
	{
		printf("\nQueue is already full.");
		return ;
	}
	else if (rear==-1&&front==-1)
	{
		rear=rear+1;
		front=front+1;
	}
	else
	{
		rear=rear+1;
	}
	linear_queue[rear]=data;
	printf("%d is enqueued",linear_queue[rear]);
}
void dequeue()
{
	if(rear==-1&&front==-1)
	{
		printf("\nQueue is already empty.");
	}
	else if(rear==front)//single element huda
	{
	printf("\n%d is dequed sucessfully.",linear_queue[front]);
	rear=-1;
	front=-1;	
	}
	else
	{
	printf("\n%d is dequed sucessfully,",linear_queue[front]);
	front=front+1;
	}
}
void front_element()
{
	if(rear==-1&&front==-1)
	{
		printf("There is no front element.");
	}
	else
	{
		printf("Your front element is %d",linear_queue[front]);
	}
}
void display()
{
	int i;
	if(rear==-1&&front==-1)
	{
		printf("Your queue is empty.");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",linear_queue[i]);
		}
	}
}
void is_empty()
{
	if(rear==-1&&front==-1){
		return 1;
	}
	else 
	return 0;
}
int is_full()
{
	if(rear==SIZE-1);
	return 1;
	else
	return 0;
	
}
int exit()
{
	printf("...TATA...");
}
