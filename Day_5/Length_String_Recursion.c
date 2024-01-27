#include <stdio.h>

int findStringLength(char *str) {
    if (*str == '\0') 
	{
        return 0;
    }
    return 1 + findStringLength(str + 1);
}

int main() 
{
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    int length = findStringLength(inputString);
    printf("Length of the string: %d\n", length);
    return 0;
}



/* Output:
-----------------
Enter a string: hello
Length of the string: 5
*/