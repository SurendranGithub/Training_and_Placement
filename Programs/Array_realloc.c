#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,i,size1,size2;
	printf("Enter the size of array to allocate :");
	scanf("%d",&size1);
	ptr = (int *)malloc(size1*sizeof(int));
	printf("Address of allocated memory:\n");
	for(i=0;i<size1;i++)
	{
		printf("%d\t",ptr+i);
	}
	printf("\nEnter the size of array to reallocate :");
	scanf("%d",&size2);
	ptr = realloc(ptr,size2);
	printf("Address of reallocated memory:\n");
	for(i=0;i<size2;i++)
	{
		printf("%d\t",ptr+i);
	}
	return 0;
}



/* Output:
------------------
Enter the size of array to allocate :3
Address of allocated memory:
11300320        11300324        11300328
Enter the size of array to reallocate :7
Address of reallocated memory:
11300320        11300324        11300328        11300332        11300336        11300340        11300344
*/