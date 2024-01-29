#include<stdio.h>

int main()
{
	int n1,n2,*ptr1,*ptr2;
	ptr1 = &n1;
	ptr2 = &n2;
	printf("Enter the 1st number :");
	scanf("%d",ptr1);
	printf("Enter the 2nd number :");
	scanf("%d",ptr2);
	if(*ptr1 > *ptr2)
	{
		printf("Maximum value is :%d",*ptr1);
	}
	else
	{
		printf("Maximum value is :%d",*ptr2);
	}
	return 0;
}



/* Output:
-------------------
Enter the 1st number :21
Enter the 2nd number :5
Maximum value is :21
*/