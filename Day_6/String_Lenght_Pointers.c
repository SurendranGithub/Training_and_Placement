#include<stdio.h>

int main()
{
	char str[50],*ptr;
	ptr = str;
	int count=0;
	printf("Enter the string :");
	scanf("%s",ptr);
	int i;
	for(i=0;ptr[i]!='\0';i++)
	{
		count++;
	}
	printf("The lenght of the given string is : %d",count);
	return 0;
}




/* Output:
----------------
Enter the string :hello
The lenght of the given string is : 5
*/