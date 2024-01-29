#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i,*ptr;
    printf("Enter the array size :");
    scanf("%d",&num);
    ptr = (int*)calloc(num,sizeof(int));
    if(ptr == NULL)
    {
        printf("\nMemory not allocated");
        exit(0);
    }
    printf("Enter the array elements");
    for(i=0;i<num;i++)
    {
        printf("\nEnter %d element :",i+1);
        scanf("%d",ptr+i);
    }
    printf("\nArray => ");
    for(i=0;i<num;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}



/* Output:
-----------------
Enter the array size :5
Enter the array elements
Enter 1 element :1

Enter 2 element :2

Enter 3 element :3

Enter 4 element :4

Enter 5 element :5

Array => 1      2       3       4       5
*/