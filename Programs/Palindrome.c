//Palindrome in Numbers

#include<stdio.h>
#include<ctype.h>

int main()
{
	int n,n1,rem,num=0;
	printf("Enter the num:");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		rem=n1%10;
		num=(num*10)+rem;
		n1/=10;
	}	
	if(num==n)
	{
		printf("\nPalindrome.");
	}
	else
	{
		printf("\nNot a palindrome.");
	}
	return 0;
}



/* Output:
---------------------
Enter the num:121

Palindrome.
*/
