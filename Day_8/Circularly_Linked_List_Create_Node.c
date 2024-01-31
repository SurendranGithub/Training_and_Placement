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

int main()
{
	int choice;
	do
	{
		printf("\n\tCircularly Linked List");
		printf("\n-----------------------------");
		printf("\n[1] Create a Node");
		printf("\n[2] Display");
		printf("\n[3] Exit");
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
				exit(0);
				break;
			default:
				printf("\nInvalid inputs");
				break;
		}
	}while(choice != 3);
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
    if(start==NULL)
    {
        printf("\n\nList empty.");
    }
    else
    {
     struct node *temp = start;
     printf("\nThe Elements are => ");
     while(temp -> next != start)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
	return start;
}



/* Output:
---------------------------

        Circularly Linked List
-----------------------------
[1] Create a Node
[2] Display
[3] Exit
Enter your choice:1

Enter the data:1

        Circularly Linked List
-----------------------------
[1] Create a Node
[2] Display
[3] Exit
Enter your choice:1

Enter the data:2

        Circularly Linked List
-----------------------------
[1] Create a Node
[2] Display
[3] Exit
Enter your choice:1

Enter the data:3

        Circularly Linked List
-----------------------------
[1] Create a Node
[2] Display
[3] Exit
Enter your choice:1

Enter the data:4

        Circularly Linked List
-----------------------------
[1] Create a Node
[2] Display
[3] Exit
Enter your choice:1

Enter the data:5

        Circularly Linked List
-----------------------------
[1] Create a Node
[2] Display
[3] Exit
Enter your choice:2

The Elements are => 1 2 3 4 5
        Circularly Linked List
-----------------------------
[1] Create a Node
[2] Display
[3] Exit
Enter your choice:3
*/