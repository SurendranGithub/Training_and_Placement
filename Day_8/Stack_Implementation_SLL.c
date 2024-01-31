#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top = NULL;
struct node *create_new(struct node*);
struct node *push(struct node*);
struct node *pop(struct node*);
struct node *display(struct node*);

int main()
{
	int choice;
	do
	{
		printf("\n\tSingly Linked List using Stack");
		printf("\n------------------------------------------");
		printf("\n\t MAIN MENU");
		printf("\n------------------------------------------");
		printf("\n[1] Create a Node");
		printf("\n[2] Push");
		printf("\n[3] Pop");
		printf("\n[4] Display");
		printf("\n[5] Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1:
				top = create_new(top);
				break;
			case 2:
				top = push(top);
				break;
			case 3:
				top = pop(top);
				break;
			case 4:
				top = display(top);
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

struct node *create_new(struct node *top)
{
	struct node *new_node;
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = NULL;
	if(top == NULL)
	{
		top = new_node;
	}
	else
	{
		new_node -> next = top;
		top = new_node;
	}
	return top;
}

struct node *display(struct node *top)
{
	struct node *temp;
	temp = top;
	if(top == NULL)
	{
		printf("\nStack Empty");
	}
	else
	{
		printf("\nThe Stack Elements are => ");
		while(temp != NULL)
		{
			printf("%d ",temp -> data);
			temp = temp -> next;
		}
	}
	return top;
}

struct node *push(struct node *top)
{
	struct node *new_node;
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = top;
	top = new_node;
	return top;
}

struct node *pop(struct node *top)
{
	struct node *temp;
	if(top == NULL)
	{
		printf("\nStack Underflow");
	}
	else
	{
		printf("\nElement popped is :%d",top -> data);
		temp = top;
		top = top -> next;
	}
	return top;
}



/* Output:
---------------------

        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:1

Enter the data:1

        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:1

Enter the data:2

        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:1

Enter the data:3

        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:1

Enter the data:4

        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:1

Enter the data:5

        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:4

The Stack Elements are => 5 4 3 2 1
        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:2

Enter the data:6

        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:4

The Stack Elements are => 6 5 4 3 2 1
        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:3

Element popped is :6
        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:4

The Stack Elements are => 5 4 3 2 1
        Singly Linked List using Stack
------------------------------------------
         MAIN MENU
------------------------------------------
[1] Create a Node
[2] Push
[3] Pop
[4] Display
[5] Exit
Enter your choice:5
*/