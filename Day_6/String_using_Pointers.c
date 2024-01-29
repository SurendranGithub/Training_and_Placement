#include<stdio.h>
#include<string.h>

int main()
{
	char str[50],*ptr;
	int i;
	ptr = str;
	printf("Enter the String :");
	scanf("%s",ptr);
	int len = strlen(ptr);
	for(i=0;i<len;i++)
	{
		printf("%c",*(ptr+i));
	}
	return 0;
}



/* Output:
-----------------
Enter the String :hello
hello
*/