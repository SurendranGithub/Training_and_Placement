//Power of a Number

#include<stdio.h>

int main()
{
	int base,pow,sum=1;
	printf("Enter the base & pow value :");
	scanf("%d %d",&base,&pow);
	for(int i=1;i<=pow;i++)
	{
		sum = sum * base;
	}
	printf("%d",sum);
	return 0;
}


/* Output:
----------------
Enter the base & pow value : 2 4
16
*/