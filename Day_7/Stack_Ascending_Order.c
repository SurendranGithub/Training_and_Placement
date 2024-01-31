#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int choice=0,top=-1,stack[MAX],stack1[MAX];

void push();
void pop();
void display();
void sort();

int main()
{
    printf("Stack Implementation using Array");
    printf("\n----------------------------------");
    do
    {
        printf("\nMenu");
        printf("\n---------------------");
        printf("\n[1]Push\n[2]Pop\n[3]Display\n[4]Sort\n[5]Exit");
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
                sort();
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

void sort()
{
	int t,h,temp,i,j;
	t = top;
	h = top;
	while(t != -1)
	{
		stack1[t] = stack[t];
		t = t-1;
	}
	for(i=0;i<h;i++)
	{
		for(j=i+1;j<=h;j++)
		{
			if(stack1[i] < stack1[j])
			{
				temp = stack1[i];
				stack1[i] = stack1[j];
				stack1[j] = temp;
			}
		}
	}
	printf("\nStack elements in ascending order => ");
	while(h != -1)
	{
		printf("%d ",stack1[h]);
		h = h-1;
	}
}




/* Output:
-------------------------
Stack Implementation using Array
----------------------------------
Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :1

Enter the value :15

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :1

Enter the value :1

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :1

Enter the value :10

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :1

Enter the value :25

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :1

Enter the value :2

Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :3

The Stack elements are => 2 25 10 1 15
Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :4

Stack elements in ascending order => 1 2 10 15 25
Menu
---------------------
[1]Push
[2]Pop
[3]Display
[4]Sort
[5]Exit
Enter your choice :5
*/