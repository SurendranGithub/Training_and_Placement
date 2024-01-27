#include <stdio.h>

// Function to find the HCF/GCD using the Euclidean algorithm
int findHCF(int num1, int num2) 
{
    while (num2 != 0) 
	{
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int hcf = findHCF(num1, num2);
    printf("Highest Common Factor (HCF) of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}



/* Output:
-----------------
Enter the first number: 12
Enter the second number: 30
*/