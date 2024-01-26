#include<stdio.h>

int main()
{
	int n,temp,rem,res;
	printf("Enter the number : ");
	scanf("%d",&n);
	temp = n;
	res = 0;
	while(temp!=0)
	{
		rem = temp % 10;
		res = res + (rem * rem * rem);
		temp = temp / 10;
	}
	if(res == n)
	{
		printf("%d is a Armstrong number",n);
	}
	else
	{
		printf("%d is not a Armstrong number",n);
	}
	return 0;
}



/* Output:
-----------------------
Enter the number : 153
153 is a Armstrong number
*/