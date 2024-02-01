#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *create_new(struct node*);
struct node *enqueue(struct node*);
struct node *dequeue(struct node*);
struct node *display(struct node*);

int main()
{
	int choice;
	do
	{
		printf("\n\tSingly Linked List using Queue");
		printf("\n------------------------------------------");
		printf("\n\t MAIN MENU");
		printf("\n------------------------------------------");
		printf("\n[1] Create a Node");
		printf("\n[2] Enqueue");
		printf("\n[3] Dequeue");
		printf("\n[4] Display");
		printf("\n[5] Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1:
				start = create_new(start);
				break;
			case 2:
				start = enqueue(start);
				break;
			case 3:
				start = dequeue(start);
				break;
			case 4:
				start = display(start);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\nInvalid inputs");
				break;
		}
	}while(choice != 5);
	return 0;
}

struct node *create_new(struct node *start)
{
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = NULL;
	if(start == NULL)
	{
		start = new_node;
	}
	else
	{
		struct node *temp;
		temp = start;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = new_node;
	}
	return start;
}

struct node *enqueue(struct node *start)
{
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = NULL;
	struct node *temp;
	temp = start;
	while(temp -> next != NULL)
	{
		temp = temp -> next;
	}
	temp -> next = new_node;
	return start;
}

struct node *dequeue(struct node *start)
{
	printf("\nDeleted Element is :%d",start -> data);
	start = start -> next;
	return start;
}

struct node *display(struct node *start)
{
	struct node *temp;
	temp = start;
	printf("\nQueue Elements are => ");
	while(temp != NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
	return start;
}



/* Output:
-----------------------

        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:1

Enter the data:1

        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:1

Enter the data:2

        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:1

Enter the data:3

        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:1

Enter the data:4

        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:1

Enter the data:5

        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:4

Queue Elements are => 1 2 3 4 5
        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:2

Enter the data:6

        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:4

Queue Elements are => 1 2 3 4 5 6
        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:3

Deleted Element is :1
        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:4

Queue Elements are => 2 3 4 5 6
        Singly Linked List using Queue
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Enqueue
[3] Dequeue
[4] Display
[5] Exit
Enter your choice:5
*/