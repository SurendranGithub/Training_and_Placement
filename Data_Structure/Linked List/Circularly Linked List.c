#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *create_new(struct node*);
struct node *display(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *insert_mid(struct node*);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
struct node *delete_mid(struct node*);

int main()
{
	int choice;
	do
	{
		printf("\n\tCircularly Linked List");
		printf("\n------------------------------------");
		printf("\n\t MAIN MENU");
		printf("\n------------------------------------");
		printf("\n[1] Create a Circularly Linked List");
		printf("\n[2] Display");
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
			default:
				printf("\nInvaid inputs");
				break;
		}
	}while(choice != 9);
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
	if(start == NULL)
	{
		start = new_node;
		new_node -> next = start;
	}
	else
	{
		struct node *temp;
		temp = start;
		while(temp -> next != start)
		{
			temp = temp -> next;
		}
		temp -> next = new_node;
		new_node -> next = start;
	}
	return start;
}

struct node *display(struct node *start)
{
	struct node *temp;
	temp = start;
	if(start == NULL)
	{
		printf("\nList is Empty");
	}
	do
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}while(temp != start);
	return start;
}

struct node *insert_beg(struct node *start)
{
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	struct node *temp;
	temp = start;
	while(temp -> next != start)
	{
		temp = temp -> next;
	}
	temp -> next = new_node;
	new_node -> next = start;
	start = new_node;
	return start;
}

struct node *insert_end(struct node *start)
{
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	struct node *temp;
	temp = start;
	while(temp -> next != start)
	{
		temp = temp -> next;
	}
	temp -> next = new_node;
	new_node -> next = start;
	return start;
}

struct node *insert_mid(struct node *start)
{
	int val,position,i;
	printf("\nEnter the position to add the data:");
	scanf("%d",&position);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data:");
	scanf("%d",&val);
	new_node -> data = val;
	struct node *temp;
	temp = start;
	for(i=2;i<position;i++)
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
	while(temp -> next != start)
	{
		temp = temp -> next;
	}
	start = start -> next;
	temp -> next = start;
	return start;
}

struct node *delete_end(struct node *start)
{
	struct node *temp;
	temp = start;
	while(temp -> next -> next != start)
	{
		temp = temp -> next;
	}
	temp -> next = start;
	return start;
}

struct node *delete_mid(struct node *start)
{
	int position,i;
	printf("\nEnter the position to delete the data:");
	scanf("%d",&position);
	struct node *temp;
	temp = start;
	for(i=2;i<position;i++)
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
-----------------------------
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:1

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:2

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:3

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:4

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:5

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2
1 2 3 4 5
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:3

Enter the data:10

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2
10 1 2 3 4 5
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:4

Enter the data:50

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2
10 1 2 3 4 5 50
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:5

Enter the position to add the data:3

Enter the data:20

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2
10 1 20 2 3 4 5 50
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:6

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2
1 20 2 3 4 5 50
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:7

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2
1 20 2 3 4 5
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:8

Enter the position to delete the data:2

        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2
1 2 3 4 5
        Circularly Linked List
------------------------------------
         MAIN MENU
------------------------------------
[1] Create a Circularly Linked List
[2] Display
[3] Insert at the Beginnig
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:9
*/