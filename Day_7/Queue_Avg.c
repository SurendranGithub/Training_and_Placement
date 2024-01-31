#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int choice,queue[MAX],front=-1,rear=-1;

void enqueue();
void dequeue();
void display();
void queue_avg();

int main()
{
	printf("Queue Implementation using Array");
	printf("\n---------------------------------------");
	do
	{
		printf("\nMenu");
        printf("\n---------------------");
        printf("\n[1]Enqueue\n[2]Dequeue\n[3]Display\n[4]Queue_Average\n[5]Exit");
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
                queue_avg();
                break;
            }
            case 5:
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
	}while(choice != 5);
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

void queue_avg()
{
	int sum=0,len=0;
    float average;
    if(rear==-1)
    {
        printf("\nQueue empty,so can't find average value for elements in queue.");
    }
    else
	{
    	for(int i=front;i<=rear;i++)
   		{
        	sum=sum+queue[i];
        	len++;
    	}
    	average=sum/len;
    	printf("\n\nAverage value is : %f",average);
    }
}



/* Output:
---------------------------
Queue Implementation using Array
---------------------------------------
Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :1

Enter the element :1

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :1

Enter the element :2

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :1

Enter the element :3

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :1

Enter the element :4

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :1

Enter the element :5

Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :3

Queue elements are => 1 2 3 4 5
Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :4


Average value is : 3.000000
Menu
---------------------
[1]Enqueue
[2]Dequeue
[3]Display
[4]Queue_Average
[5]Exit
Enter your choice :5
*/