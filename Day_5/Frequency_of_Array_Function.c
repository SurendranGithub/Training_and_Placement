#include <stdio.h>

void findFrequency(int arr[], int size) 
{	
    int freq[size];
    for (int i = 0; i < size; i++) 
	{
        freq[i] = 0;
    }
    for (int i = 0; i < size; i++) 
	{
        if (freq[i] == -1) 
		{
            continue;  
        }
        int count = 1;
        for (int j = i + 1; j < size; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                count++;
                freq[j] = -1;  
            }
        }
        freq[i] = count;
    }
    printf("Element\tFrequency\n");
    for (int i = 0; i < size; i++)
	{
        if (freq[i] != -1) 
		{
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    findFrequency(arr, size);
    return 0;
}



/* Output:
----------------
Enter the size of the array: 8
Enter the elements of the array:
1 2 3 2 1 4 2 1
Element Frequency
1       3
2       3
3       1
4       1
*/
