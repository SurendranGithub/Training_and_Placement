//Factorial of a Number

#include<stdio.h>

int main()
{
	int n,i,fact;
	printf("Enter the number :");
	scanf("%d",&n);
	fact = 1;
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	printf("\nThe Factorial of %d is : %d",n,fact);
	return 0;
}



/* Output:
---------------
Enter the number :5

The Factorial of 5 is : 120
*/