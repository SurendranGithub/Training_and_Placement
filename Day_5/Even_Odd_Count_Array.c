#include <stdio.h>

void countEvenOdd(int size, int arr[]) 
{
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] % 2 == 0) 
		{
            evenCount++;
        } else 
		{
            oddCount++;
        }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    countEvenOdd(size, arr);
    return 0;
}



/* Output:
---------------
Enter the size of the array: 5
Enter elements of the array:
2
4
5
1
8
Number of even elements: 3
Number of odd elements: 2
*/
