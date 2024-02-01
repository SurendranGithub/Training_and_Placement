#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *start = NULL; 

void create_new();
void display();
void insert_beg();
void insert_end();
void insert_mid();
void delete_beg();
void delete_end();
void delete_mid();

int main()
{
	int choice;
	do
	{
		printf("\n\tDoubly Linked List");
		printf("\n-----------------------------------");
		printf("\n\t MAIN MENU");
		printf("\n-----------------------------------");
		printf("\n[1] Create a Doubly Linked List");
		printf("\n[2] Display");
		printf("\n[3] Insert at the Beginning");
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
				create_new();
				break;
			case 2:
				display();
				break;
			case 3:
				insert_beg();
				break;
			case 4:
				insert_end();
				break;
			case 5:
				insert_mid();
				break;
			case 6:
				delete_beg();
				break;
			case 7:
				delete_end();
				break;
			case 8:
				delete_mid();
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("\nInvalid inputs");
				break;
		}
	}while(choice != 9);
	return 0;
}

void create_new()
{
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	if(start == NULL)
	{
		new_node -> prev = NULL;
		new_node -> next = NULL;
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
		new_node -> prev = temp;
		new_node -> next = NULL;
	}
	printf("\nNode Inserted!!!");
}

void display()
{
	struct node *temp;
	temp = start;
	if(start == NULL)
	{
		printf("\nList is Empty");
	}
	printf("\nThe Elements are => ");
	while(temp != NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
}

void insert_beg()
{
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;
	new_node -> next = start;
	new_node -> prev = NULL;
	start = new_node;
}

void insert_end()
{
	int val;
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;	
	struct node *temp;
	temp = start;
	while(temp -> next != NULL)
	{
		temp = temp -> next;
	}
	temp -> next = new_node;
	new_node -> prev = temp;
	new_node -> next = NULL;
}

void insert_mid()
{
	int val,position,i;
	printf("\nEnter the position to add the data:");
	scanf("%d",&position);
	printf("\nEnter the data:");
	scanf("%d",&val);
	struct node *new_node , *temp;
	temp = start;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = val;	
	for(i=2;i<position;i++)
	{
		temp = temp -> next;
	}
	new_node -> next = temp -> next;
	temp -> next -> prev = new_node;
	temp -> next = new_node;
	new_node -> prev = temp;
}

void delete_beg()
{
	struct node *temp;
	temp = start;
	if(start -> next != NULL)
	{
		start = start -> next;
        start -> prev = NULL;
        free(temp);
	}
	else
	{
		start = NULL;
        free(temp);
	}
}

void delete_end()
{
    struct node *temp = start;
    if(temp -> next == NULL) 
	{
        start = NULL;
        free(temp);
    }
    else 
	{
        while(temp -> next != NULL) 
		{
			temp = temp -> next;
        }
        temp -> prev -> next = NULL;
        free(temp);
    }
}

void delete_mid() 
{
	struct node *preptr = start , *ptr;
	int position,i;
    printf("\nEnter the position to delete the data:");
    scanf("%d",&position);
    for(i=2;i<position;i++)
	{  
    	preptr = preptr -> next;
	}
	ptr = preptr -> next;
	preptr -> next = ptr -> next;
	ptr -> next -> prev = preptr;
	free(ptr);
}



/* Output:
----------------------------------
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:1

Node Inserted!!!
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:2

Node Inserted!!!
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:1

Enter the data:3

Node Inserted!!!
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 2 3
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:3

Enter the data:10

        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 10 1 2 3
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:4

Enter the data:50

        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 10 1 2 3 50
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:5

Enter the position to add the data:3

Enter the data:20

        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 10 1 20 2 3 50
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:6

        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 20 2 3 50
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:7

        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 20 2 3
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:8

Enter the position to delete the data:2

        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:2

The Elements are => 1 2 3
        Doubly Linked List
-----------------------------------
         MAIN MENU
-----------------------------------
[1] Create a Doubly Linked List
[2] Display
[3] Insert at the Beginning
[4] Insert at the End
[5] Insert at the Middle
[6] Delete at the Beginning
[7] Delete at the End
[8] Delete at the Middle
[9] Exit
Enter your choice:9
*/