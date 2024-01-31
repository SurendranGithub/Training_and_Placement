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
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_mid(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_mid(struct node *);
 
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
		printf("\n[3] Insert at the Beginnig");
		printf("\n[4] Insert at the End");
		printf("\n[5] Insert at the Middle");
		printf("\n[6] Delete at the Beginning");
		printf("\n[7] Delete at the End");
		printf("\n[8] Delete at the Middle");
		printf("\n[9] Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start = create_new(start);
				printf("\nLinked List Created");
				break;
			case 2:
				start = display(start);
				break;
			case 3:
				start = insert_beg(start);
				break;
			case 4:
				start = insert_end(start);
				break;
			case 5:
				start = insert_mid(start);
				break;
			case 6:
				start = delete_beg(start);
				break;
			case 7:
				start = delete_end(start);
				break;
			case 8:
				start = delete_mid(start);
				break;
			case 9:
				exit(0);
				break;
			default :
				printf("\nInvald inputs");
				break;
		}
	}while(choice != 9);
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

struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = start;
	start = new_node;
	return start;
}

struct node *insert_end(struct node *start)
{
	struct node *new_node , *temp;
	int val;
	temp = start;
	printf("\nEnter the data:");
	scanf("%d",&val);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = NULL;
	while(temp -> next != NULL)
	{
		temp = temp -> next;
	}
	temp -> next = new_node;
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

struct node *delete_beg(struct node *start)
{
	struct node *temp;
	temp = start;
	start = start -> next;
	return start;
}

struct node *delete_end(struct node *start)
{
	struct node *temp;
	temp = start;
	while(temp -> next -> next != NULL)
	{
		temp = temp -> next;
	}
	temp -> next = NULL;
	return start;
}

struct node *delete_mid(struct node *start)
{
	struct node *temp;
	temp = start;
	int position;
	printf("\nEnter the position to delete:");
	scanf("%d",&position);
	for(int i=2;i<position;i++)
	{
		if(temp -> next != NULL)
		{
			temp = temp -> next;
		}
	}
	temp -> next = temp -> next -> next;
	return start;
}



/* Output:
----------------------------

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:1

Linked List Created
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:2

Linked List Created
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:3

Linked List Created
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:4

Linked List Created
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:5

Linked List Created
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 2 3 4 5
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:3

Enter the data:10

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 10 1 2 3 4 5
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:4

Enter the data:50

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 10 1 2 3 4 5 50
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:5

Enter the position to add the data:5

Enter the data:20

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 10 1 2 3 20 4 5 50
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:6

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 2 3 20 4 5 50
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:7

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 2 3 20 4 5
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:8

Enter the position to delete:4

        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 2 3 4 5
        Singly Linked List
--------------------------------------
         MAIN MENU
--------------------------------------
[1] Create a Linked List
[2] Display the List
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:9
*/