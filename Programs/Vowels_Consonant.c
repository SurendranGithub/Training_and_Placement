// Check the character is vowels or not

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the character :");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\nThe character %c is a vowel",ch);
	}
	else
	{
		printf("\nThe character %c is a consonant",ch);
	}
	return 0;
}



/* Output:
---------------
Enter the character :a

The character a is a vowel
*/