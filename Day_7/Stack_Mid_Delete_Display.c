#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int choice=0,top=-1,stack[MAX];

void push();
void pop();
void display();
void min_element_del();

int main()
{
    printf("Stack Implementation using Array");
    printf("\n----------------------------------");
    do
    {
        printf("\nMenu");
        printf("\n---------------------");
        printf("\n[1]Push\n[2]Pop\n[3]Display\n[4]Min_Element_Delete\n[5]Exit");
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                min_element_del();
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

void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter the value :");
        scanf("%d",&val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("Element popped : %d",stack[top]);
        top = top - 1;
    }
}

void min_element_del()
{
	int mid , i;
	mid = top / 2;
	for(i = mid; i < top; i++) 
	{
		stack[i] = stack[i + 1];
	}
	stack[top--] = '\0';
	display();	
}

void display()
{
    int i;
    if(top < 0)
    {
    	printf("\nStack is Empty");
    }
    else
    {
	printf("\nThe Stack elements are => ");
	for(i=top;i>=0;i--)
	{
	   printf("%d ",stack[i]);
    	}
    }
}




/* Output:
-----------------------------
Stack Implementation using Array
----------------------------------
Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :1

Enter the value :1

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :1

Enter the value :2

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :1

Enter the value :3

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :1

Enter the value :4

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :1

Enter the value :5

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :3

The Stack elements are => 5 4 3 2 1
Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :4

The Stack elements are => 5 4 2 1
Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Min_Element_Delete
[5]Exit
Enter your choice :5
*/