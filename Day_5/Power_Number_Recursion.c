#include<stdio.h>

int power(int n1, int n2);

int main()
{
	int base, a , result;
	printf("Enter the base number :");
	scanf("%d",&base);
	printf("\nEnter the power number :");
	scanf("%d",&a);
	result = power(base,a);
	printf("%d ^ %d = %d",base,a,result);
	return 0;
}

int power(int base,int a)
{
	if(a!=0)
	{
		return (base * power(base,a-1));
	}
	else
	{
		return 1;
	}
}



/* Output:
-------------
Enter the base number :3

Enter the power number :4
3 ^ 4 = 81
*/