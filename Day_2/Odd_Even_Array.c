#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[10];
    int i, j = 0, k = 0, n;
    printf("Enter the array size :");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ", i+1);
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]%2==0)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }
    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t", arr3[i]);
    }
	return 0;
}



/* Output:
--------------------
Enter the array size :5
Enter 1 element : 2
Enter 2 element : 5
Enter 3 element : 4
Enter 4 element : 7
Enter 5 element : 8

The Even elements are :
2       4       8
The Odd elements are :
5       7
*/

