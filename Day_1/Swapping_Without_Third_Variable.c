#include<stdio.h>

int main()
{
	int a , b;
	printf("Enter the a value : ");
	scanf("%d",&a);
	printf("\nEnter the b value : ");
	scanf("%d",&b);
	printf("\nBefore swapping a & b values");
	printf("\n%d",a);
	printf("\n%d",b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter swapping a & b values");
	printf("\n%d",a);
	printf("\n%d",b);
	return 0;
}



/* Output :
-----------------------
Enter the a value : 1

Enter the b value : 2

Before swapping a & b values
1
2
After swapping a & b values
2
1
*/