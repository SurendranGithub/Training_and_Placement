#include <stdio.h>  

void selectionsort(int arr[], int n);  
void swap(int *, int *);  

int main()  
{  
    int n, i;  
    printf("Enter the size of the Array: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    selectionsort(arr, n);  
    printf("The final Array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}  

void selectionsort(int arr[], int n)  
{  
    int i, j, min_in;  
    for(i = 0; i < n - 1; i++)  
    {  
        min_in = i;  
        for(j = i + 1; j < n; j++)  
        {  
            if(arr[j] < arr[min_in])  
            {  
                min_in = j;  
            }  
        }  
        swap(&arr[min_in], &arr[i]);  
    }  
}  

void swap(int *x, int *y)  
{  
    int temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  



/* Output:
-----------------
Enter the size of the Array: 5
Enter the elements: -1
4
-8
5
0
The final Array: -8 -1 0 4 5
*/

//							OR

//Partition Method

#include <stdio.h>  
int main()  
{  
    int n, i, j;  
    printf("Enter the size of the Array: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    j = 0;  
    for(i = 0; i < n; i++)  
    {  
        if(arr[i] < 0)  
        {  
            if(i != j)  
            {  
                int temp = arr[i];  
                arr[i] = arr[j];  
                arr[j] = temp;  
            }  
            j++;  
        }  
    }  
    printf("The resultant Array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
    return 0;
}



/* Output:
----------------
Enter the size of the Array: 5
Enter the elements: -8 4 -1 5 -6
The resultant Array: -8 -1 -6 5 4
*/