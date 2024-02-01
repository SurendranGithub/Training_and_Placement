#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int choice,queue[MAX],front=-1,rear=-1;

void enqueue();
void dequeue();
void display();

int main()
{
	printf("Queue Implementation using Array");
	printf("\n---------------------------------------");
	do
	{
		printf("\nMenu");
        printf("\n---------------------");
        printf("\n[1]Enqueue\n[2]Dequeue\n[3]Display\n[4]Exit");
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("\nInvalid inputs");
                break;
            }
    	}
	}while(choice != 4);
	return 0;
}

void enqueue()
{
	int val;
	if(rear == MAX - 1)
	{
		printf("Queue Overflow");
	}
	else if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear = rear + 1;
	}
	printf("\nEnter the element :");
	scanf("%d",&val);
	queue[rear] = val; 
}

void dequeue()
{
	if(front == -1 || front > rear)
	{
		printf("\nQueue underflow");
	}
	else if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		printf("\nElement deleted : %d",queue[front]);
		front = front + 1;
	}
}

void display()
{
	int i;
	if(front == -1)
	{
		printf("\nQueue is Empty");
	}
	else
	{
		printf("\nQueue elements are => ");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}




/* Output:
------------------------
Queue Implementation using Array
---------------------------------------
Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :1

Enter the element :1

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :1

Enter the element :2

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :1

Enter the element :3

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :1

Enter the element :10

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :1

Enter the element :5

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :3

Queue elements are => 1 2 3 10 5
Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :2

Element deleted : 1
Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :3

Queue elements are => 2 3 10 5
Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Exit
Enter your choice :4
*/



