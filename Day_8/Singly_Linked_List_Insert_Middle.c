#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *create_new(struct node *);
struct node *display(struct node *);
struct node *insert_mid(struct node *);

int main(int argc , char *argv[])
{
	int choice;
	do
	{
		printf("\n\tSingly Linked List");
		printf("\n--------------------------------------");
		printf("\n\t MAIN MENU");
		printf("\n--------------------------------------");
		printf("\n[1] Create a Linked List");
		printf("\n[2] Display the List");
		printf("\n[3] Insert at the Middle");
		printf("\n[4] Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start = create_new(start);
				break;
			case 2:
				start = display(start);
				break;
			case 3:
				start = insert_mid(start);
				break;
			case 4:
				exit(0);
				break;
			default :
				printf("\nInvald inputs");
				break;
		}
	}while(choice != 4);
	return 0;
}

struct node *create_new(struct node *start)
{
	struct node *new_node;
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = NULL;
	if(start == NULL)
	{
		start = new_node;
	}
	else
	{
		struct node	*temp = start;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = new_node;
	}
	return start;
}

struct node *display(struct node *start)
{
	struct node *temp;
	temp = start;
	printf("\nThe Elements are => ");
	while(temp != NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
	return start;
}

struct node *insert_mid(struct node *start)
{
	struct node *new_node , *temp;
	int val,position;
	printf("\nEnter the position to add the data:");
	scanf("%d",&position);
	printf("\nEnter the data:");
	scanf("%d",&val);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	temp = start;
	for(int i=2;i<position;i++)
	{
		if(temp -> next != NULL)
		{
			temp = temp -> next;
		}
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;
	return start;
}




/* Output:
-----------------------

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:1

Enter the data:1

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:1

Enter the data:2

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:1

Enter the data:3

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:1

Enter the data:4

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:1

Enter the data:5

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:2

The Elements are => 1 2 3 4 5
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:3

Enter the position to add the data:3

Enter the data:6

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:2

The Elements are => 1 2 6 3 4 5
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Middle
[4] Exit
Enter your choice:4
*/