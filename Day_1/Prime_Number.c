#include<stdio.h>

int main()
{
	int n,i,flag=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n==0 || n==1)
	{
		printf("%d is not a Prime Number",n);
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag++;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a Prime Number",n);
	}
	else
	{
		printf("%d is not a Prime Number",n);
	}
	return 0;
}



/* Output:
---------------
Enter the number : 7
7 is a Prime Number
*/